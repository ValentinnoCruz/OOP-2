

#ifndef VEC_H
#define VEC_H
#include <iostream>

class Vec{
    // -- float data members
    float x,y;

public:
    //-- static member null
    static Vec null;
    
    //----Constructor default
    Vec(){
        x = 0;
        y = 0;
    }
    
    //-----Constructor 2 coordinates
    // ---- two float data members
    Vec(float x, float y){
        this->x = x;
        this->y = y;
    }

    void setX(float x){
        this->x = x;
    }

    void setY(float y){
        this->y = y;
    }

    float getX() const{
        return x;
    }

    float getY() const{
        return y;
    }

    // ---- add method
    void add(Vec v){
        this->x += v.x;
        this->y += v.y;
    }

    void print(){
        std::cout << "(" << x << ", " << y << ")";
    }
};

Vec Vec::null = Vec();

#endif //LAB6_VEC_H
