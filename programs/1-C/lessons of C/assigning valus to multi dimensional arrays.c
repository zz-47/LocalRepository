#include <stdio.h>

int main() {

   // initiallizing a multidimentional array

int arr[2][3]={ {1,2,3} , {4,5,6} };

   arr[0][2] = 1; // 1 is assigned and changed with 3
     arr[1][0] = 6; //6 is assigned and changed with 4

printf("%d\n",arr[0][2]);
printf("%d\n",arr[1][0]);
    return 0;
}