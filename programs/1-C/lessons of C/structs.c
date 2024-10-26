// struct having process of structing variables and to initiallize in same line

#include<stdio.h>
#include<conio.h>
 struct Person {

    double salary;
    int age;
 };
 int main(){
           
       printf("Age of person1 : %d\n",person1.age);
       printf("Salary of person1 : %.2lf\n",person1.salary);
 

       printf("Age of person2 : %d\n",person2.age);
       printf("Salary of person2 : %.2lf",person2.salary);        

    return 0;
 } 



// use of allies as addition of (typedef) in struct definition to aquire more efficency
#include<stdio.h>
#include<conio.h>
 typedef struct Person {

    double salary;
    int age;
 } person; // person here will be use to sturct as a data type for variables ; person1 and person2
 int main(){
          person person1;
       person1.age=25;
       person1.salary=4500.55;
       printf("Age of person1 : %d\n",person1.age);
       printf("Salary of person1 : %.2lf\n",person1.salary);
          person person2;
       person2.age=36;
       person2.salary=5500.99;    

       printf("Age of person2 : %d\n",person2.age);
       printf("Salary of person2 : %.2lf",person2.salary);        

    return 0;
 } 

// A quest to find sum of complex numbers having real and imaginary part
#include<stdio.h>
#include<conio.h>
 typedef struct complex {
   double real;
   double img;
 } complex;
 int main(){
  //structing two complex No.s
  complex c1 = {.real=21.8, .img=30};
  complex c2 = {.real=35.6, .img=26};

  complex sum; // stucting for sum of above complex No.s   
    
    sum.real = c1.real + c2.real; // initallization of real numbers
    sum.img = c1.img + c2.img; // initiallization of imaginar numbers

  printf("Result = %.2lf + %.2lf", sum.real , sum.img );  //printing sum of complex numbers

    return 0;
 } 