#include<stdio.h>

int main() 
{
 FILE*fptr;

 fptr = fopen("newfile.txt","w");  // "w" is for writting file contents of file

 fputs("I'm writing a file using fputs\n",fptr);

 fputs("I'm Zeeshancodes24/7\n",fptr);

 fputs("Now I'm closing the file\n .........\n closed !",fptr);

 fclose(fptr);

  return 0;
}