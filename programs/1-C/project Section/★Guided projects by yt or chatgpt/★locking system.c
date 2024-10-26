#include <stdio.h>


  int main() {

  printf("-------------   Welcome User : ZZ47   ------------- \n      plesae give your key to accsess...\n");
 
  int password;
  int fakeinput;
     
     printf("         Enter Key / Pin :");
           scanf("%d",&password);
 if(password<=14562 && password>=14562)
 {
  printf("\n          Password is Correct...");
  printf("\n            Access granted !!!");
 }
 else
 {
  printf("\n        Error Password incorrect!!! \n!!!!!!!!! Entering Breach Protection mode !!!!!!!!!");
 }
  return 0;
  }