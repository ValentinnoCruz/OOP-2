#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
   vector<vector<string> > V(11);
   string str;
   for (int i = 0; i < V.size(); ++i){
       V[i] = {};
   }
   int flag = 0;
   while (true){
       cin >> str;
       if (str == "quit" || str.size() > 10){
           break;
       }
       flag = 0;
       if (find(V[str.size()].begin(), V[str.size()].end(), str) != V[str.size()].end()){
           flag = 1;
       }
       if (flag == 0){
           V[str.size()].push_back(str);
       }
       
   }
              cout << " Output: "<<endl;
   for (int i = 0; i < V.size(); ++i){
       if (V[i].size() != 0){

           cout << i*V[i].size() << " " << V[i].size() << endl;
       }
   }
   return 0;
}