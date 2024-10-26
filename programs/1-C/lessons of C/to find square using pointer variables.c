#include <stdio.h>

void findsqr(int* number)
{

int square = *number * *number; // used to calculate sqr as number x number
   *number = square; // assigning value assigned to number inside main ,i.e (int number = 12;)

}


int main() {

int number = 12;

   findsqr(&number);

  printf("Square is %d", number);

    return 0;
}