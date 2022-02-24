#include <iostream>
using namespace std;


    // 1 char and 1 double
    struct x_1
    {
       char c;
       double d;
    };

    //2 chars and 1 double
    struct x_2
    {
       char c1,c2;
       double d;
    };

    //3 chars and 1 double
    struct x_3
    {
       char c1,c2,c3;
       double d;
    };

    //4 chars and 1 double
    struct x_4
    {
       char c1,c2,c3,c4;
       double d;
    };


    //an empty struct
    struct x_5
    {

    };

    //1 char, followed by 1 int and then 1 char
    struct x_6
    {
       char c;
       int i;
       char c1;
    };

    //2 chars followed by 1 int
    struct x_7
    {
       char c1,c2;
       int i;
    };

int main(){

   cout<<"Struct size of 1: "<<sizeof(x_1)<<endl;
   cout<<"Struct size of 2: "<<sizeof(x_2)<<endl;
   cout<<"Struct size of 3: "<<sizeof(x_3)<<endl;
   cout<<"Struct size of 4: "<<sizeof(x_4)<<endl;
   cout<<"Struct size of 5: "<<sizeof(x_5)<<endl;
   cout<<"Struct size of 6: "<<sizeof(x_6)<<endl;
   cout<<"Struct size of 7: "<<sizeof(x_7)<<endl;

   return 0;
}