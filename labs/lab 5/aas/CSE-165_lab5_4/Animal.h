#ifndef LA4_Animal_h
#define LA4_Animal_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
    string name;
    int age;
    
    
public:
    //store the number of instances of the animal object
    static int count;

    //constructor define
    Animal(){
        cout << "Creating Generic Animal" << endl;
        name = "Generic Animal";
        age = 0;
    }
    
    void display (const vector<Animal*> & list){
        
    }
    
    string getName(){
        return name;
    }
    
    void setName(string name){
        this->name = name;
    }
    
    int getAge(){
        return age;
    }
    
    void setAge(int age){
        this->age = age;
    }
    // animal deconstructor
    ~Animal(){
        cout << "Deleting Generic Animal" << endl;
    }
    
    void feed(){
        cout << "Some food, please!" << endl;
    }
    
};

#endif
