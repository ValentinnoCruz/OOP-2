#include<iostream>
#include<string>
#include<cstring>
#include<vector> 
#include<algorithm>             // for transform method
using namespace std;

bool isStartsWith(string main, string match){
    // converting both strings to lowercase
    transform(main.begin(), main.end(),main.begin(), ::tolower);
    transform(match.begin(), match.end(),match.begin(), ::tolower);
    
    if(main.find(match)==0){            // match is found at index 0 means , main start with match
        return true;
    }
    else{
        return false;
    }
              
}
int main(){
    string s="Notquit";
    vector<string> v;
    while(strcasecmp(s.c_str(),"quit")!=0){
        cin>>s;
        if(s.length()>=4){
            v.push_back(s);             // if length of string is more than or equal to 4 push into vector 
        }
        
        else{
            for(string temp:v){
                if(isStartsWith(temp,s)){         // if temp starts with s
                    cout<<temp<<" ";
                }
            }
            cout<<endl;
        }
    }
}