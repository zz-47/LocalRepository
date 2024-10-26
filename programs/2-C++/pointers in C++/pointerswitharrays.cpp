#include <iostream>

   using namespace std;

    int main()
    {
        // her we have an array of 3 elements
      int arr[] = { 10 , 20 , 30 };
         // now i'll De-reference the the arr[] ,using *arr
         cout << *arr <<endl<<endl;
          // it will print out 10 because of 10 being at 0th index
          
             // now making a pointer.
              int *ptr = arr;
               // now starting a for loop to print all indexes.
                 for(int i =0 ; i<3 ; i++)
                 {
                   cout <<*ptr<< endl; // printing pointer
                    ptr++; // here every increement will be equal to 4-bits                     
                 }    // output :  all elents in arr[]

        return 0;
    }