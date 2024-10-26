#include <stdio.h>


int main() {

int nums[5] = {1,2,3,4,5};

 for(int i=0; i<5; ++i){

   printf("%d = %p\n",*(nums+i), nums[i]);
 }

    return 0;
}