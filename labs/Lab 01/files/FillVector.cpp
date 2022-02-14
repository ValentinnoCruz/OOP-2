#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;


int main() {
	
	ifstream myfile;
	myfile.open("code.cpp");
	vector<string> v;
	
	string line;
 	while (getline(myfile, line))     //keep reading from the file, store into string 
		v.push_back(line);	//add string to vector
	int j = 0;
	string s;
	for (int i = 0; i < v.size(); i++) {
		s+= v[i];
		
	}
	cout << s << " ";
	
	myfile.close();
	return 0;
}
