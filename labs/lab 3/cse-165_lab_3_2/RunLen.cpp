
  #include <iostream>

  using namespace std;

  int main(){

        char a;
        int num;
        string output = ""; // to save output


      while (true)
        {
          cin >> a >>num;

          if (num >=0)
          {
            while (num >0)
            {
              output = output + a;
              num--;
            }
          }
        

        //if -1 than add new line to output
        else if(num ==-1)
        {
          output = output + "\n";
        }

        //if -2 end loop
        else if (num ==-2)
        
          break;
        
      }

        //print 

        cout << output;
        return 0;

  }