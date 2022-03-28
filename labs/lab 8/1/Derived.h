
#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
#include "ADT.h"

// pulled from public ADT
class Derived : public ADT {

    // what to do during doSomething
    void doSomething(){
        std::cout << "I did something" << std::endl;

    }

    // what to do during doSomethingElse
    void doSomethingElse(){
        std::cout << "I did something else" << std::endl;

    }

    void dontDoThis(){

    }

};

#endif
