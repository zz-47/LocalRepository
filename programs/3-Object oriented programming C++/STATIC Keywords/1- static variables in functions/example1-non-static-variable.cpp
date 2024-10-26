#include <iostream>
#include <string>

      using namespace std;


     // creating a void function . to print a variable.

       void func(){
          
            int x = 0; // simple integer.
         
         // printing the integer
           
             cout << " x : " << x << endl;
           // increasing value of integer by 1 / increment.

               x++; 
       }
  

     int main()
     {
         
         // callng function 3 time to check repetion...
          
        func();   
               // created -> printed -> deleted
           func(); 
                  // created -> printed -> deleted
            func(); 
                    // created -> printed . // loop ends.
       
         // value is repeated because of non-static variable.

          // as , value is created in stack ,then printed ,then deleted , and the created in a loop.
       
        return 0;
     }   