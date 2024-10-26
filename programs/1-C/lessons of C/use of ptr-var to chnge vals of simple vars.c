#include <stdio.h>

void findvalue (int* num) {

    *num = 29;
}

int main() {

int number = 12;
 
    findvalue(&number);

            printf("Number = %d" , number );
    return 0;
}