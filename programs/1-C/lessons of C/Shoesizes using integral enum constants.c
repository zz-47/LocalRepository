// A program to show shoe sizes using integral values of enum constants
#include<stdio.h>
  enum size
   {      // Folwing are integral constants as , they have fixed integer values :
  Small,      // small = 0
   Medium,     // medium = 1
    Large,      // large = 2
     ExtraLarge  // XL = 3
  };   // The above entries are enum constants
int main()
{
  // creating an enum type variable
enum size shoesize;    // Now this statement can store above constants Small-ExtraLarge
 
 shoesize =ExtraLarge;

  printf("%d", shoesize);
    return 0;
 } 