#include <iostream>

      using namespace std;

      class B; // Forwards declaration to use the class in recursion.

      class A   // creating a class1 to use cross referencial object B* b; .
      {
       public:       
         B* b; // cross referencig the object b of class B into class A.

           // creating show functions to indicate cross refernced objects.
            
             void show() {
                 cout << " A's Cross-Referenced-Object(b) = " << b << endl;
             } 
      };

      class B   // creating a class2 to use cross referencial object A* a; .
      {
       public: 
         A* a; // cross referncing the object a of class A into Class B.
           
           // creating a show function to indicate cross-referencing.
             
             void show(){
                cout << " B's Cross-Referenced-Object(a) = " << a << endl;
             }
      };

           int main()
           {
              // Inialization of normal objects of Class A and B.

                 A a;
                  B b;
                 // creating Cross references B/W Class A and Class B.
                     a.b = &b;  // developing cross reference object b of Class A = Memory Address of object b.
                      b.a = &a;  // developing cross reference object a of Class B = Memory Address of object a.

                      //   using objects to print out message of opposite Classes.

                         a.show();     // shows massage written in class A about occourance of cross referncing.
                          b.show();     // shows message written in class B about occourance of cross referencing      
              return 0;
           }

    // Output : shows memory opposite addersses of objects (A a;) and (B b;).      