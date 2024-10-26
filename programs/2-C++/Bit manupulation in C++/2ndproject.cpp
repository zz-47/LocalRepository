# include <iostream>

     using namespace std;

      // now making a function setbit()

         int setbit( int n , int pos ){
          //                           int n; and int pos; same as in getbit.

          // now returning , n OR position left shifted 1 times .
          return (n | ( 1<< pos));   // same rulings as in getbit.
        }
    
    
    int main() 
    {
        
        // printing the setbit () functions.
           cout <<setbit(5,1)<< endl;   // n = 5 , pos = 1.
             // output will be equal to seven as , obtained 7 binary numbers after setting bit
        
        return 0;
    } 