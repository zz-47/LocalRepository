#include <stdio.h>


int main() {

int numbers[5] = {1 ,3 ,5 ,7 ,9 };

for(int i = 0 ; i < 5 ; ++i )
{

   printf("%d = %p\n",numbers[i],&numbers[i]);

}
        printf("Array address = %p",numbers);


    return 0;
}

// address of 1st element = address of array

// the interval b/w each address of array elements is of 4