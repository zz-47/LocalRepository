#include <iostream>

      using namespace std;
      
     // making function for getbit , sending number and position of required index.

        int getbit( int n , int pos){
            //                         let int n; =  given number , and int pos; = required position                       
            
            //      returning n and position left shifted 1 time = , should not be equal to 0 . 
    // strictly use brackets
            return (( n & (1<<pos))!=0) ; // if equal to 0 then return 0; in main()  function.
        } 

    int main ()
    {
      
     // giving output ,as

         cout <<getbit(5,2)<< endl; // number = 5 and  position = 2.       
         // output should be 1 ,because 1 & 1 = 1 in binary.
      return 0;  
    }   