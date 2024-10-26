
/*
            class A                            Class B
               ^                                 ^
               \                                 /
                \                               /
                 <---------- Class C ---------->
*/

#include <iostream>

     using namespace std;

     class A  // created parent 1 (base class 1)
     {
      public:  
       void funcA(){
          cout << "dad is inheriting property to C" << endl;
       }
     };
         class B  // created parent 2 (base class 2)
       {
        public:
           void funcB(){
                cout << endl << "mom is also inheriting property to C" << endl;
           }
       };
  
     class C : public A , public B   // created child C (derived class 3) , that inherits parents 
     {
        public:  // used so to call functions of A and B .
     }; 
    
    
         int main()
        {
    
         // creating a object c of class C.
          C c;
           // using object c to inherit and print the contents of classes A and B
             c.funcA();     // property of class 1
             c.funcB();     // property of class 2
         return 0;
        } 