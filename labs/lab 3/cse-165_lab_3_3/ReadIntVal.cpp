#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n;
    vector<int>vc;
    
    cout << "Input: " << endl;
    
    //loop 
    while(1)
    {
        
        
        // ask for use input
        cin>>n;
        
        // when n is pos. push to vect
        if(n > 0)
            vc.push_back(n);
        
        // when n is neg. eliminate corresponding abs val
        if(n < 0)
        {
            for(int i = 0; i < vc.size(); i++)
            {
                // when abs val is discovered
                if(abs(n) == vc[i])
                    //remove 
                    vc.erase(vc.begin() + i);
            }
        }
        
        // when n equals 0 show all the elements of vec and sum up
        if(n == 0)
        {
            int sum = 0;
            cout << "Output: " <<endl;
            for(int i = 0;i < vc.size(); i++)
            {
                sum += vc[i];
                cout<<vc[i]<<" ";
            }
            
            cout<<sum<<endl;
            break;
        }
    }
    return 0;
}