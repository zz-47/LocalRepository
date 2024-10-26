#include<stdio.h>

int main() 
{
 FILE*fptr;

 fptr = fopen("test.txt","r");  // "r" is for read file
 char content[1000];

 // NOW using if/esle statement for printing purposes as

 if(fptr != NULL)
 {
   while(fgets(content,1000,fptr)) 
       printf("%s",content);
 }
 
 else
 {
     printf("\nFile opening Unsuccessful !");
 }
 fclose(fptr);
  return 0;
}