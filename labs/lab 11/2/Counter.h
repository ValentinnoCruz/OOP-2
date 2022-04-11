#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>

class Counter
{
public:
    static int count;
    int ID;
public:
    //•• constructor
    Counter() : ID(count++)
    {
        std::cout << ID << " created" << std::endl;
    }
    // •• deconstructor
    ~Counter()
    {
        std::cout << ID << " destroyed" << std::endl;
    }

    //•• print new
    void* operator new (size_t size)
    {
        std::cout << "new" << std::endl;
        return malloc(size);
    }

    // •• delete
    void operator delete(void* ptr)
    {
        std::cout << "delete" << std::endl;
        free(ptr);
    }
};

#endif