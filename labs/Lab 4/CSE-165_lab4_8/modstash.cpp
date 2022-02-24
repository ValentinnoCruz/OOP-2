#include<iostream>
#include<fstream>

#include"Stash.h"

using namespace std;

int main()

{

ifstream file;

struct stash s;

double number;

file.open("input.txt");

s.intialize(10);

while(!file.eof())

{

file>>number;

s.add(&number);

}

file.close();


cout<<"\nNumber of elements in stash: "<<s.count();

for(int i=0; i<s . count(); i++)

count<<"\nElement at number "<<i<<" is: "

<<*(double*)s.fetch(i);

cout<<"\n";

s.cleanup();

system("pause");

return 0;

}