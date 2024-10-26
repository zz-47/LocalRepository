#include <iostream>

     using namespace std;

      void swap(int *aptr, int *bptr){ // we changed int a and b with ptrs.
         int temp = *aptr; // made a temporary var.     (a --> temp)
           *aptr = *bptr;  // (a --> b)
           *bptr=temp;  // (temp --> b)
      }  

         int main()
        {
         
          int a = 2 ;
          int b = 3 ;
           cout << a << " --> " << b << endl;
              int *aptr = &a;// location of a.
              int *bptr = &b;// location of b.
             
              // calling swap fun();

                swap(aptr,bptr);

             cout << a << " <-- " << b <<endl; // will not swap until the use of pointers.
              // at the end of the day normal vars con not be passed and modified in functions other than main.
             // for that we pass pointer variables. 
           return 0;
        }