#include <iostream>
#include <string>

      using namespace std;

     // creating a class..

      class A
      {
         public :
          
           // creating a non-static variable .

             int x;

               // creating a increement function.

            void incre(){
              x = x + 1;
            }
      };
      
      
      
      int main()
      {
         // creating an object .
          
           A obj1;  // obj1 has its own x.

           A obj2;  // obj2 has its own different x.
             
             // initiallization (x = 0).

              obj1.x = 10;

              cout << "value of obj1 : "<< obj1.x << endl;
  
              
             obj2.x = 20;

            cout << " value of obj2 : " << obj2.x << endl;

                  
        return 0;
      }