#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
        vector <string> input;//vector of strings
        string s;//string s for input
        while(s!="quit"){//until "quit" is not given as input, continue
                cin>>s;//user input
                int len = s.length();//store length of input
                if(len<4){//if input size is less than 4
                        for(int i=0;i<input.size();i++)//check all strings in the vector
                                if(input[i].substr(0,len)==s)//if it starts with the current input
                                        cout<<input[i]<<endl;//display it
                }
                //else if length of input is 4or higher, and it's not "quit"
                else if(s!="quit" && len>=4)
                        input.push_back(s);//add it to the vector if strings
        }
        return 0;
}
