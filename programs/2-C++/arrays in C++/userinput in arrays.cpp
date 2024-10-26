#include<iostream>

    using namespace std;

    int main()
   {

    int n;
  cout << "Enter the size of array : ";
     cin >>n;
       int array[n];
        
        /* Here we can take inputs manually as :
        
        cin >> array[0]; 
          upto
        cin >> array[n];                      */
     cout  << "Enter Array elements : ";
         for(int i=0 ; i<n ; i++)
         {
           cin >> array[i];      // Here we used the loop to take user input .
         } 

            for(int i =0 ; i<n ; i++)
             {
               cout << array[i]<< endl;   // Here we used the loop for viceversa of above loop .
             }

        return 0;
     } 