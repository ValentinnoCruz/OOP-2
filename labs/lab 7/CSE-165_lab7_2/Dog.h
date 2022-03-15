#ifndef LA5_Dog_h
#define LA5_Dog_h

#include "Animal.h"

class Dog : public Animal 
{
public:
    
    //when animal is called virtual 
    Dog () : Animal()
    {
        
    }
    
    Dog (string n, int a) : Animal(n, a)
    {
        
    }
    void talk()
    {
        cout << "Woof, woof!" << endl;
    }
};

#endif