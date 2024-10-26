#include <stdio.h>


int main() {

int numbers[5] = {1,3,5,7,9};

*numbers = 2;
*(numbers+4) = 11;

printf("%d\n",*numbers);

 printf("%d\n",*(numbers+4));

    return 0;
}