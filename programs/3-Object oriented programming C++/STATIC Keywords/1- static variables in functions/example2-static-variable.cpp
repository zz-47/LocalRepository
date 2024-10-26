#include <iostream>
#include <string>

     using namespace std;

     void func(){

      // creating a static variable , thats value can be repeated...

        static int x = 0; // x = 0 will never be repeated.

          // printing...

           cout << " x : " << x << endl;
            
             // increasing value by 1 / increment.

              x++;
     }
     
     
     int main()
     {
        
        func();
               // created -> printed -> saved.
         func();
                // created -> printed new -> saved.
          func();
                 // created -> printed new -> saved.

            // func();   ( x = 0 ) , ( x = 1 ) , ( x = 2 ) will never be repeated.    

            // calling anothertime

             func();  

              // didn't delete any value nor repeat any value , ( each int x is created new in stack memory )

        return 0;
     }