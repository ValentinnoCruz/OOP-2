#include<iostream>
#include<assert.h>

using namespace std;


/* ==================================================================
   ================================================================== */

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


/* ==================================================================
   ================================================================== */


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

/* ==================================================================
   ================================================================== */


class RectStash {
        int size; // Size of each space
        int quantity; // Number of storage spaces
        int next; // Next empty space

        // Dynamically allocated array of bytes:
        unsigned char* storage;
    public:

        // Functions!
        void initialize(int sz) {
            size = sz;
            quantity = 0;
            storage = 0;
            next = 0;
        }

        void cleanup() {
            if (storage != 0) {
                std::cout << "freeing storage" << std::endl;
                delete[]storage;
            }
        }

        int add(const void* element) {
            if (next >= quantity) // Enough space left?
                inflate(100);

            // Copy element into storage,
            // starting at next empty space:
            int startBytes = next * size;
            unsigned char* e = (unsigned char*)element;

            for (int i = 0; i < size; i++)
                storage[startBytes + i] = e[i];
            next++;

            return(next - 1); // Index number
        }

        void* fetch(int index) {
            // Check index boundaries:
            assert(0 <= index);

            if (index >= next)
                return 0; // To indicate the end

            // Produce pointer to desired element:
            return &(storage[index * size]);
        }

        int count() {
            return next; // Number of elements in CStash
        }

        void inflate(int increase) {
            assert(increase > 0);

            int newQuantity = quantity + increase;
            int newBytes = newQuantity * size;
            int oldBytes = quantity * size;
            unsigned char* b = new unsigned char[newBytes];

            for (int i = 0; i < oldBytes; i++)
                b[i] = storage[i]; // Copy old to new

            delete[]storage; // Old storage
            storage = b; // Point to new memory
            quantity = newQuantity;
        }
        RectStash() {
            initialize(sizeof(Rect*));
        }
};

int main(int argc, const char * argv[]){
    float a, b, c, d;
    RectStash storage;
    Rect* tmp;
    Vec vector;

    do{
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        tmp = new Rect(a, b, c, d);
        if (a >= 0 || b >= 0 || c >= 0 || d >= 0) {
            storage.add(tmp);
        }
    } while (a >= 0 || b >= 0 || c >= 0 || d >= 0);

    do{
      cin>>a;
      cin>>b;
      vector = Vec(a, b);

      if (a != -99 || b != -99){
        int i = 0;
        tmp = static_cast <Rect*>(storage.fetch(i));
        while (tmp != 0) {
          if(tmp->contains(vector))
            cout << "in ";
          else 
            cout << "out ";
          i++;
          tmp = static_cast<Rect*> (storage.fetch(i));
        }
      }
    }while (a != -99 || b != -99);
}       