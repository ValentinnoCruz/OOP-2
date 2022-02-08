#include <iostream> 
using namespace std;


void decToBinary(int n);
void decToHexa(int n);


int main()
{
    
    int n;
    do {
        cout << "input your value : ";
        cin >> n;
        if (n == -1)
        {
            break;
        }
        cout << "Binary number: ";
        decToBinary(n);
        cout << "Hexa Decimal number: ";
        decToHexa(n);

    } while (n != -1);
    return 0;
}

// function to convert decimal to binary 
void decToBinary(int n)
{
    // array to store binary number 
    int binaryNum[32];

    // counter for binary array 
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    cout << endl;
}

// function to convert decimal to hexadecimal 
void decToHexa(int n)
{
    // char array to store hexadecimal number 
    char hexaDeciNum[100];

    // counter for hexadecimal number array 
    int i = 0;
    while (n != 0)
    {
        // temporary variable to store remainder 
        int temp = 0;

        // storing remainder in temp variable. 
        temp = n % 16;

        // check if temp < 10 
        if (temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }

    // printing hexadecimal number array in reverse order 
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
    cout << endl;
}