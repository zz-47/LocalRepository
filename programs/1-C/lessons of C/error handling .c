#include<stdio.h>
#include<errno.h>

extern int errno;

int main(){
 
 FILE *fptr;

//printf("Errno berfore : %d\n",errno);

 fptr = fopen("err.txt","r");

 if(fptr=NULL){

  printf("Errno After : %d\n",errno);
 }

else{

    fclose(fptr);
}  
 
 return 0;
}