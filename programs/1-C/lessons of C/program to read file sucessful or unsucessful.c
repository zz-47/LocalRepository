#include<stdio.h>

int main() 
{
 FILE*fptr;

 fptr = fopen("//filename","r");  // "r" is for read file

 // NOW using if/esle statement for printing purposes as

 if(fptr != NULL){
     printf("\nFile opening Successful...");
 }
 
 else{
     printf("\nFile opening Unsuccessful !");
 }
  return 0;
}