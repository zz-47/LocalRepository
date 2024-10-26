#include <iostream>
#include <string>

     using namespace std;
      
      // creating a class used to inherit ( blueprint ) in form of a void func(); 
        class shape
        {
             // upon use of pure virtual function in the class , IT AUTOMATICALLY BECOMES ABSTRACT CLASS.
         
           // creating a virtual function to be inherited.
             
              virtual void draw() = 0; // a pure virtual function only used to inherit.
   
        };  // we cannot create objects of this class.

          
          
           // creating a derived class , which uses class shape{} ,as blueprint  

            class circle : public shape {
               public :

                void draw(){
                   
                    cout << " Drawing a Circle ...\n"; // no endls...
                }

            };

    int main()
    {
         // creating an object of derived class...

           circle c1;

            // using object to inherit / use the abstract class as blueprint   
          
              c1.draw();
        
        return 0;
    } 