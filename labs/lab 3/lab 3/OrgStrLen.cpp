#include <iostream>
#include<vector>
#include<string>


using namespace std;


int main() {
    vector<string>vec[10];

    // ask user to input their strings
    cout << "Input: " << endl;
    while(1) {
        string input;
        cin >> input;

        if(input == "quit")
            break;

        // store strings @ index-1 in the vect. of list of str's
        vec[input.length()-1].push_back(input);   
    }

    // print string list
    cout << "" << endl;
    cout << "Output: " << endl;
    
    
    for(int i=0; i<10; i++) {
        for(int j=0;j < vec[i].size(); j++) 
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

