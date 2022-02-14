#include <iostream>
#include <math.h>
#define PI (3.1415923)
using namespace std;



int main() {
    
    int x;
    double area;
    

    cout << " What is the radius of the circle?" << endl;
    cin >> x;
    area = PI* pow(x,2);
    cout << "the radius is " << area << endl;
}

