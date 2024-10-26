// A program to show shoe sizes using assigned values of enum constants
#include<stdio.h>

  enum size
   {      // Folwing are Assigned constants as , they have assigned integer values :
  Small = 31,      
   Medium = 36,     
    Large = 43,      
     ExtraLarge = 47,  
  };   // The above entries are enum constants with assigned values

int main()
{
  // creating multiple enum type variable for different sizes
enum size shoesize1 = Small;  
  enum size shoesize2 = Medium;
    enum size shoesize3 = Large;
      enum size shoesize4 = ExtraLarge;

 // Printing above each value saperately

  printf("small = %d\n", shoesize1);
     printf("medium =%d\n", shoesize2);
        printf("large = %d\n", shoesize3);
           printf("XL    = %d\n", shoesize4);
    return 0;
 } 