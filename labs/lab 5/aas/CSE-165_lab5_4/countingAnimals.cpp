#include <iostream>
#include "Animal.h"

using namespace std;

//instances of the animal object
int Animal::count = 2;

int main(int argc, const char * argv[])
{
    
    Animal myAnimal;
    Animal anotherAnimal;
    
    cout << Animal::count << endl;
    return 0;
}