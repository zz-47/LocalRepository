#include<iostream>

     using namespace std;

     int main()
    {
      
      // Pointers are Variables used for Storing Memeory Address of other Variables

     // suppose a variable int i =10;
     int i =10;
    // printing value of int i;     
        cout << endl << "Value assigned to int i = " << i << endl << endl;
     // Now we have a pointer var int*iptr;                                         
     int *iptr; // Its location output is (0xe2cabff804/randomized everytime). <<<<<<<<<
     //                                                                                ^    These   two can be done   
     // Now we'll set the value of *iptr to MEMMORYADDRESS of Int i;                   ^    in one time as (int *iptr = &i;).
         iptr = &i; // here &i represents MEMMORY ADDRESS OF int i;  >>>>>>>>>>>>>>>>>>>
     
       // printing address of int i; ,using &i
     
         cout << "Memory location of int i ,given by &i = " << &i <<endl << endl;      
     
             // output : address of int i is equal to 0xe2cabff804/randomized.

     
                 // printing address of int i; ,using iptr
     
                    cout << "Memory location of int i ,given by iptr= " << iptr << endl << endl;
     
                    // output same as previous.

                       // Now assigning value to *aptr;
     
                      *iptr = 20;        

                   // printing dereferenced pointer to give value of int i;
     
                           cout  << "Value assigned to *iptr , by De-referencing = " << *iptr << endl << endl;
     
            // if we use *iptr it'll dereference iptr for address towards  value.        
     
           // output : 20 , as assigned above
           return 0;
    }