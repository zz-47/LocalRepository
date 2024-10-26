#include<stdio.h>
#include<conio.h> //used to work with getch() statement
int main(){
  int i=0;
   char ch;
     char pwd[30];

   printf("Your registered account is: zz-47@gmail.com\nEnter your password : ");


   while((ch = _getch())!=13) {  // (13) is ascii value of (\n) 
    pwd[i] = ch;
    i++;  
    printf("*");
  }
  pwd[i] ='\0';
  printf("\n Your Password is : %s",pwd);


 return 0;
}