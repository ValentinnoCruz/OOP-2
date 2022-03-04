
#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.h"

class Dog : public Animal
{

    public:
        // dog constructor
        Dog(std::string name, int age){
            cout << "Creating Dog" << endl;
            Dog::setName(name);
            Dog:setAge(age);
        }

        void feed(){
            cout << "A small bone, please!" << endl;
        }
        // dog deconstructor
        ~Dog(){
            cout << "Deleting Dog" << endl;
        }

};

#endif 
