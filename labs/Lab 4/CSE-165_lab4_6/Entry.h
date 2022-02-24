#ifndef ENTRY_H

#define ENTRY_H

#include <iostream>

#include <string>

using namespace std;

struct Addressbook

{

string name1, last1, mail1;

void setName(const string firstname){

name1 = firstname;

}

void setLastname(const string lastname){

last1 = lastname;

}

void setEmail(const string email){

mail1 = email;

}


void print(){

int n;

cout << "First Name: " << name1 << endl;

cout <<"Last Name: " << last1 << endl;

cout << "Email: " << mail1 << endl;

}

};
#endif