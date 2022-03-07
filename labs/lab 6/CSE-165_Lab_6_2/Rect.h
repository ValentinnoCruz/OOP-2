#include "Vec.h"

class Rect{
    
    // --- four floats representing a rectangle
    float upLeftX;
    float upLeftY;
    float width;
    float height;

    public:
        // constructor receiving the four floats
        Rect(float upLeftX, float upLeftY, float width, float height){

            this->upLeftX = upLeftX;
            this->upLeftY = upLeftY;
            this->width   = width;
            this->height  = height;

        }
        // method contains classifying if a given vec is inside or out
        bool contains(Vec v){

            if(v.getX() >= upLeftX && v.getX() <= upLeftX + width)
                if(v.getY() <= upLeftY && v.getY() >= upLeftY - height)
                    return true;

            return false;

        }

};
