/* program to give values of trigno ratios upon giving values in degrees */ 
#include <stdio.h>
#include <math.h>
int main() {
   float degree ,radian ;
  float PI = 3.14159; 
     printf("Enter in degrees : \n");
     scanf("%f",&degree);
/* writting a pointer that indicates that PI / 180 is 
  stored in float degree */
    
  radian = degree * PI /180;
     
    printf("sin(%f) = %f \n", degree , sin(radian));
     printf("cos(%f) = %f \n", degree , cos(radian));
      printf("tan(%f) = %f \n" , degree , tan(radian));
       printf("cosec(%f) = %f \n" , degree , 1/sin(radian));
        printf("sec(%f) = %f \n" , degree , 1/cos(radian));
         printf("cot(%f) = %f \n" , degree , 1/tan(radian));

    return 0;
}