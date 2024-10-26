
#include<stdio.h>
int main()
{
int age = 25;

printf("%p",&age);
return 0;
}  


// To get address and value of an integer age ,using pointers
#include<stdio.h>
int main()
{
int age =25;

int* ptr = &age;

printf("Adress  : %p\n",ptr);

printf("Value   : %d",*ptr);

return 0;
}  


// To change value of a variable using (*ptr = ;) statement
#include<stdio.h>
int main()
{
int age =25;

int* ptr = &age;

*ptr = 31;

printf("%d",age);

return 0;
}  
