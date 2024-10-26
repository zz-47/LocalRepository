#include <stdio.h>

#define PI 3.14159

int main() {

 double radius = 12.5;

  double area = PI * radius * radius ; // this formula is for πr² as area of circle / sector of it

  printf("%.2lf",area);

    return 0;
}

// single #define function macro to print area


#include <stdio.h>

#define PI 3.14159

#define areaofcircle(r) (PI*r*r)
int main() {

 double radius = 9.00;

 double area = areaofcircle(radius);

  printf("%.2lf",area);

    return 0;
}