#include <iostream>
#include <fstream>
#include "stack.h"
using namespace std;

//stack every new element we stack adds a new instance every time

int main() {
        //object
        Stack s;
        s.initialize(); //----initialize 

        //file
        ifstream infile;
        infile.open("input.txt");
        if(!infile)

      {
      cout << "Error! the requested file '" 
           << "input.txt" << "' was not found" << endl;
      cout << "Exiting ." << endl;
      exit(-1);
      }
      
       double k ;
       int count = 0;
       
       //----add via push onto stack
       while(infile >> k)
       {
         double *d = new double(k);
         s.push(d); //add push onto stack
         ++count;
       }
       
      //----pop element 
       while(count > 0)
       {
           cout << (*((double *)(s.pop()))) <<"\n "; //----print
           --count;
       }
      cout << endl;
      
       //stack clean up
       s.cleanup();

}