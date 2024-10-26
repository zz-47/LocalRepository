#include<iostream>
#include<string>
     using namespace std;

    class str
    {
      public :
 
   // overloading strings...

     string A = " value in string A ";// A > --|
//                                             |
//                                             |        
        string B = A;       // B <-------------|

      void show(){
         cout << " String B  : " << B << endl;
      }

    };
    
    
    int main()
    {
        
      // Creating an object.
       
        str s1;

         s1.show();
        
        return 0;
    }