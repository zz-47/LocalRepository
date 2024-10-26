#include <iostream>

     using namespace std;

     // updatebit  is combination of clearbit and setbit.

         int updatebit( int n , int pos , int value){  // added value to configure btw 1 and 0.
            // performing clearbit ,
               int mask = ~(1<<pos);
               n = n & mask; // clear the required bit .

            // performing setbit , 
               return (n | (value<<pos)); // returning n or left shifting position to  value( 0 or 1 ) 
         }

    int main ()
    {
    
       cout << updatebit(5,1,1) <<endl;  // here n = 5 , pos = 1  , value =1. 
         // output :   7   =  0111  .
        return 0;
    }