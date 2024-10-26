#include <iostream>

      using namespace std;

      int main()
        {
       
         //  here we have a variable 
         int a = 10;
         int *p;

         p = &a ; // p set to address of a.

             cout << endl << "Address of int i = " << *p << endl; // here *p = 10 , after de referrencing .

                 // now making a "*q" pointet to pointer "*p".
                 int **q = &p; // here **q is pointer to pointer *p.

                    // now we'll de reference **q this time.

                        cout<< endl << "location of ptr p : " << *q << endl;

                 // pointer q will give loction of pointer p.               
          return 0;
        }