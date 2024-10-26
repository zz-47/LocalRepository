#include <stdio.h>
int main(void)
{
char str[20];
 printf("Enter your name : ");
scanf("%s",str);                              
    printf("%s",str);
    return 0;
}

// solution of space bar problem

#include <stdio.h>
int main(void)
{
char str[20];
 printf("Enter your name : ");
fgets(str , sizeof(str), stdin); /* the parameters :
1. shows name of string
2. shows size of string
3. shows standard function
*/
    printf("%s",str);
    return 0;
}

// to edit or change a string character

char str[] = "zeeshan";
   str [0] = 'Z';
  printf("%s",str); 