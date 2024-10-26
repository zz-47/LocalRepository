#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
 
 
 #define MAX_LINE 1024

int main() {

FILE*file;
 char input[MAX_LINE];
 
 file = fopen("file.txt","a");

   if(file == NULL){

  printf("Error occoured !\n"); 
   return 1;
   }

 printf("Enter'quit' to exit \n");
 do{ 
  fgets(input , MAX_LINE , stdin);
    if (strcmp(input,"quit\n")==0)
    break;
   fputs(input , file); 
 }while(true);

 fclose(file);
    
    return 0;
}
