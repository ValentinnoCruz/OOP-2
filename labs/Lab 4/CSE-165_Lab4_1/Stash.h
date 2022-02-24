#ifndef STASH_H
#define STASH_H

#include <cassert>
#include <iostream>

struct Stash {
	int size;      // Size of each space
	int quantity;  // Number of storage spaces
	int next;      // Next empty space
  
	// Dynamically allocated array of bytes:
	unsigned char* storage;
  
	// Functions!
	void initialize(int sz){
		size = sz;
		quantity = 0;
		storage = 0;
		next = 0;
	}
  
	void cleanup(){
		if(storage != 0) {
		  std::cout << "freeing storage" << std::endl;
		  delete []storage;
		}
	}
  
  
	int add(const void* element){
		if(next >= quantity) // Enough space left?
		  inflate(100);
	  
        //copying the element into the storage, starting with next empty space        
		int startB = next * size;
		unsigned char* e = (unsigned char*)element;
	  
		for(int i = 0; i < size; i++)
		  storage[startB + i] = e[i];
		next++;
	  
		return(next - 1); // Index number
	}

	void* fetch(int index){
            
		//check the boundries of the index
		assert(0 <= index);
  
		if(index >= next)
			return 0; // to let us know this is the end
  
		// Produce pointer to desired element:
		return &(storage[index * size]);
	}
  
	int count() {
		return next; //amount of elements in stash 
	}
  
	void inflate(int increase){
		assert(increase > 0);
		
		int newQuantity = quantity + increase;
		int newBytes = newQuantity * size;
		int oldBytes = quantity * size;
		unsigned char* b = new unsigned char[newBytes];
		
		for(int i = 0; i < oldBytes; i++)
			b[i] = storage[i]; // Copy old to new
		
		delete []storage; // Old storage
		storage = b; // Point to new memory
		quantity = newQuantity;
	}
}; ///:~

#endif
