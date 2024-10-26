
/*
           Class A
             ^       ----------->     relation b/w single pair of classes
             |                   
           Class B   
*/
#include <iostream>

     using namespace std;

  // Example :
 
  class A   // created base class
  {
    public :   
     // created public type to inherit attributes to other classes
      
      void func(){      // created attributes to demonstrate inheritance
          cout << " I inhert Property to B " << endl;
      }
  };

  class B : public A {      // inheriting all attributes of public : class A to Class B (inheritance is occouring here)
    }; 

    int main()
    {
      B b;   // creating an object b for class B
      b.func();   // using object b to print content of inherited func();
    }




    
        
         
        
       