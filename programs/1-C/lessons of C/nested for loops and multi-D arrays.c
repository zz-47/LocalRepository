#include <stdio.h>

int main() {

   // initiallizing a multidimentional array

int arr[2][3]={ {1,2,3} , {4,5,6} };

    // using nested for-loops to print each elements of arr

           for(int i = 0 ; i < 2 ; ++i)
           {
               for(int j = 0 ; j < 3 ; ++j)
               {
                  printf("%d ",arr[i][j]);
               }
           }
    return 0;
}