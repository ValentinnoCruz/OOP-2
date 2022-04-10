#include <iostream>
#include "Counter.h"
using namespace std;

class Counter 
{
        int ID; //•• int ID
        static int count;   // static int count

        public:
        // •• Constructor
        Counter() :ID(count++)
        {
                cout<<ID<<" created"<< endl;
        }
        //•• deconstructor
        ~Counter() 
        {
                cout<<ID<<" destroyed"<<endl;
        }
};

int Counter::count = 0;
int main(int argc, const char * argv[]) 
{

        Counter * myCounter = new Counter;
        Counter * anotherCounter = new Counter;

        delete myCounter;
        delete anotherCounter;
        return 0;
}