#include <iostream>
#include <string>
#include "Entry.h"

using namespace std;
int main()
{
    struct Entry e;
    string input;

    cout << "First Name? ";
    cin >> input;
    e.set_first_name(input);

    cout << "Last Name? ";
    cin >> input;
    e.set_last_name(input);

    cout << "Email? ";
    cin >> input;
    e.set_email_address(input);

    cout << "\n";
    e.print();

    return 0;
}
