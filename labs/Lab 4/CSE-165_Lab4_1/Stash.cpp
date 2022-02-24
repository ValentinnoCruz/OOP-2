#include<iostream>
#include<fstream>
#include "Stash.h"


//stash increments memory space 

using namespace std;
int main()
{
     ifstream file;
     struct Stash s;
     double num;

     file.open("input.txt"); //open input.txt
     s.initialize(10); // ----- initialize 
     
     while(!file.eof())
     {
        file >> num;   // num file
        s.add(&num);  //---add values to stash 
     }
     file.close();


     //cout<<"\nStash Size "<<s.count();
     
     //print out the value
     cout << "\nOutput: ";
     for(int i=0;i<s.count();i++)               // iteration 
         cout << "\n" << *(double*)s.fetch(i); //--print stash value

     cout <<"\n";
     s.cleanup(); // run clean up

     return 0;

}