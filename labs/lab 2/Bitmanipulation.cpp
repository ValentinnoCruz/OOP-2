#include<iostream>
using namespace std;
void getBit(int n);
void setBit(int n);
void clearBit(int n);
void convertDecimalToBinary(int n);

int main()
{
    int n, a[10], i, input;
    cout << "Enter your number: ";
    cin >> n;


    convertDecimalToBinary(n);

    cout << endl << "what do you want to do? :" << endl;
    cout << "A. Retrieve a bit" << endl;
    cout << "B. Set a bit" << endl;
    cout << "C. Clear a bit" << endl;

    cin >> input;

    switch (input) 
    {
        case 1:
            getBit(n);
            break;
        case 2:
            setBit(n);
            break;
        case 3:
            clearBit(n);
            break;
        default:
            cout << endl << "Invalid input";
    }

    return 0;
}

void getBit(int n) 
{
    int k;
    cout << endl << "Enter the index: ";
    cin >> k;
    k = k + 1;
    cout << endl << ((n & (1 << (k - 1))) >> (k - 1));
}

void setBit(int n) 
{
    int index;
    cout << endl << "Enter the index: ";
    cin >> index;
    int number = ((1 << index) | n);
    convertDecimalToBinary(number);
}

void clearBit(int n) 
{
    int k;
    cout << endl << "Enter the index: ";
    cin >> k;
    k = k + 1;
    int input = (n & (~(1 << (k - 1))));
    convertDecimalToBinary(input);
}

void convertDecimalToBinary(int n)
{
    int a[10], i;

    for (i = 0; n > 0; i++) 
    {
        a[i] = n % 2;
        n = n / 2;
    }

    cout << endl << "Binary output is: ";

    for (i = i - 1; i >= 0; i--) 
    {
        cout << a[i];
    }

}

