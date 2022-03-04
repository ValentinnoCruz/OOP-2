
#include "Dog.h"
#include "display.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<Animal *> ToDisplay;

    int count;

    // user input of how many animals
    cin >> count;

    //  read in char, string, & int
    char type;
    string name;
    int age;

    while(count != 0)
    {
        cin >> type;
        cin >> name;
        cin >> age;

        // it is an animal
        if(type == 'A')
        {
            Animal * push = new Animal();

            // name and age
            push->setName(name);
            push->setAge(age);

            // push back to vector of pointers
            ToDisplay.push_back(push);
        }

        // otherwise it is a dog
        else
        {
            Dog * push = new Dog(name, age);

            // push back to vector of pointers
            ToDisplay.push_back(push);
        }
        count--;
    }
    // display results
    display(ToDisplay);

    return 0;
}