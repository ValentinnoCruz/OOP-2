#include<iostream>
#include<fstream>
#include "LinkedList.h"

using namespace std;

int main(){
        ifstream infile("input.txt"); //open input.txt
        
        //we make sure the file is opened correctly
        if(!infile){
                cout<<"input.txt file is not found!"<<endl;
                return 0;
        }
        //creating and init. a list
        LinkedList list;
        list.initialize();
        float input;
        
        //----looping as long as input is read from the file successfully
        while(infile>>input){
                float* f=new float(input); //create a new dynamic float pointer
                list.add(f); //-------adding to list
        }
        //--------Print all the elements within the list using 'get'
        for(int i=0;i<list.size;i++){
                float* f=(float*)(list.get(i));
                cout<<*f<<"  "; // //-------- print out 
        }
        cout<<endl;
        
        
        /* we need to deallocate all memory
         * 1) deallocate occupied memory used by each float pointer defined here
           - its important that it should be deallocated ONLY here */
        
        for(int i=0;i<list.size;i++){
                delete (float*)list.get(i); //delete deallocation
        }
        //now cleaning up list by deallocating nodes. it will be done by LinkeList
        list.cleanup();
        return 0;
}
