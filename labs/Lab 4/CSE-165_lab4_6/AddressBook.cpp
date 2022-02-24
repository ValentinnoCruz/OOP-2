#include <iostream>
#include "AddressBook.h"
using namespace std;


int main(int argc, const char * argv[])
{
    string name1, lastname1, email1;
    int n;
    
    
    cout << " Enter number of entries: ";
    cin >> n;

    // for loop to increment (add) next iteration
    for(int i=0;i<n;i++)
        {
            cout << "\nFirst name? ";
            cin >> name1;

            cout << "Last name? ";
            cin >> lastname1;

            cout << "Email address entry? ";
            cin >> email1;

            Addressbook myEntry;
            myEntry.setName(name1);
            myEntry.setLastname(lastname1);
            myEntry.setEmail(email1);
            myEntry.print();
        }
        

    return 0;

}