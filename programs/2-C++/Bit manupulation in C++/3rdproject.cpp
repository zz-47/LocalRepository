#include <iostream>
    
     using namespace std;

     // now making a function to clear bit.

         int clearbit( int n , int pos ){
          // making a number for making ,that flip 0s and 1 , to opposite.
          int mask = ~(1<<pos);  // just used to use the liping terminology of (~).
              // returning n with operator &and mask. 
         return (n & mask);
         } 

    int main () 
    {
    
      cout << clearbit(5,2) << endl; // n =5 , pos = 2. 
       // output is 1 .
        return 0;
    } 