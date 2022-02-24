#include <iostream>
#include "Stack.h"
using namespace std;


void deletecb(void * pt);


int main(int argc, const char * argv[])
{
   Stack * doubleStack = new Stack; 
   doubleStack->initialize();
  
   double value;
   int n;
  
   cout << "Input: " << endl;
   cin >> n;

   for (int i=0; i < n; i++){
       cin >> value;
        doubleStack->push(new double(value));
   }
    void (*deletecb_ptr)(void * pt) = deletecb;
    doubleStack->setDeleteCallback(deletecb_ptr);  
  
    doubleStack->cleanup();
  
    return 0;
}


//hold pointer to the function 
void deletecb(void * pt){
    double * dpt = (double *)pt;
    cout<<"Deleting: " << * dpt << "\n";
    delete dpt;
}