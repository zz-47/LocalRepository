/*
               -->  Class A              // arrows are in opposite direction
               |                         
               ---- Class B  <--          
                               |         
                    Class C ----          
*/

#include <iostream>
   
     using namespace std;

    class A              // created grandparent (Class A to inherit Class B) 
    {
     public :
       void funcA(){
          cout << "Grandpa inherited property to Dad " << endl << endl;
       }
    };    

    class B   : public A    // created parent (B to inherit , already inherited asset from class A to class C )
    {
     public :
       void funcB(){
         cout << "Dad inherited property to Me." << endl;
       }
    };
    
    class C : public B    // created child function to inherit the inheritance by ganddad and dad    
    {
       public : // to inherit and print the inheritance.
    };
    
         int main()
       {
     
          C c; // create object c of class C to print .
           // printing the inheritance 
             c.funcA();
            c.funcB();
          return 0;
       } 