// For encryption of a file

#include <stdio.h>
#include <stdlib.h>


int main() {

 FILE *input , *output ;
char edata;
  
   input = fopen("login.txt","r");

 if (input == NULL){

  puts("Error reading file..");

 exit (1); // used exit 1 to comfirm that program shutsdown
 }  
  output = fopen("output.txt","w");
 if (output == NULL){

  puts("Error writting file");
 exit (1);
 } 

 do{
   
    edata = fgetc(input);
     fputc(edata+4, output);
 }while (edata != EOF);

printf("encryption successful...");
printf("\nyou may now open/send output.txt safely...");

fclose(input);
fclose(output);

    return 0;
}
