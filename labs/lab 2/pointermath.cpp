#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    int* x, * y;

    x = &n1;
    y = &n2;

    cout << "Enter your 1st number: ";
    cin >> n1;
    cout << "Enter your 2nd number: ";
    cin >> n2;




    cout << "Multiply: " << (*x) * (*y) << endl;
    cout << "Addition: " << (*x) + (*y) << endl;
    cout << "Subract: " << (*x) - (*y) << endl;
    cout << "Division: " << (*x) / (*y) << endl;

    return 0;
}
