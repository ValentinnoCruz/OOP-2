#include <iostream>
using namespace std;
#include <string>
#include "Shared.h"

class Obj : public Shared 
{
	public:
		string n;
        // •• Constructor Print New
		Obj(string name) 
        {
			n = name;
			cout << "New " <<  n << endl;
		}
        // Deconstructor print Delete
		~Obj() 
        {
			cout << "Delete " << n << endl;
		}
};
