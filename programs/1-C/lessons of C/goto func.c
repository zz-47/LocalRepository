#include <stdio.h>

int main() {
    int num;
  for(int i=0 ; i < 8 ; i++) 
  {
            printf("%d", i); 
  for(int j =0 ; j < 8 ; j++) 
  {
            printf("Enter any no,or zero to exit : ");
        
        scanf("%d",&num);   
         
         if(num==0)
         {
             goto end; 
            }
          }
       }
       end:
    return 0;
    }