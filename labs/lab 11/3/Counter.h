#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstdio>
class Counter {
	
	public:
		int ID;
		static int count;
		Counter() : ID(count++)  // constructor
        {
            //Took out "created"
		}
		
		// took out 'new' and 'delete' operators

        // •• number of objects created
		void* operator new[](size_t size) 
        {
			int n = size / (sizeof(Counter))-1;
			cout << "new " << n << " counters starting at " << count << endl;
			return malloc(size); // return allocated block of uninitialized memory size
		}

        //•• value of first object created in the array
		void operator delete[](void* ptr) 
        {
			cout << "delete counters" << endl;
			free(ptr);
		}
		~Counter()  //deconstructor 
        {
            //•• took out "destroyed"
		}

};

