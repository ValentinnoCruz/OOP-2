#ifndef OBJECT_H
#define OBJECT_H

struct Object
{
    //static member 
    static int count;
    
    // object constructor 
    Object()
    {
        count++;
    }

    // incremented every time a class is created.
    Object(const Object& someObject)
    {
        count++;
    }

};

#endif 
