       #include<stdio.h>
#include<math.h>
#include<float.h>

 int main (void) {

// writing float for finite numbers - / +
    float finite = 2.5;
  if (isfinite(finite));
    printf("%f is finite\n",finite);


// writing float for + infinity     
   
   
   float infinite = 1.0 / 0 ;
  if (isinf (infinite));
   printf("%f is infinite\n",infinite);

// writing float for - infinity     
   
   
   float infinite = -1.0 / 0 ;
  if (signbit(infinite));    // signbit to give true negative return
   printf("%f is infinite\n",infinite);

// writing float for no_a_number   
  
   float not_a_number = 0.0 / 0.0 ;
  if(isnan(not_a_number));
   printf("%f is not a number\n",not_a_number);

// writing float for smallest normalized number

 float number = FLT_MIN;
if(isnormal(FLT_MIN));
 printf("%e is normal\n",number); 
 // here %e is formatespecifier for floating point numbers



// writing float for smallest not normalized number

 float number = FLT_MIN / 10 ;
if(isnormal(number));
 printf("%e is not normal",number);



// writing float for smallest sub-normalized number

 float number = FLT_MIN / 10 ;
if(isnormal(number))
 printf("%e is normal\n",number);
else
 printf("%e is not normal\n",number);

        float test
   FILE POINTERS CLASSIFY 


// writing float test of file pointer classify for infinity 


float test = 1.0 / 0.0;

 switch (fpclassify(test)) {
     case FP_INFINITE :
       printf("%f is infinite\n",test);
       break;


// writing float test of file pointer classify for not a number


float test = 0.0 / 0.0;

 switch (fpclassify(test)) {
     case FP_NAN :
       printf("%f is not_a_number\n",test);
       break;
 }


// writing float test of file pointer classify for normal number


float test = 2.5;

 switch (fpclassify(test)) {
     case FP_NORMAL :
       printf("%f is normal \n",test);
       break;
 }


// writing float test of file pointer classify for SUBNORMAL


float test = FLT_MIN/10;

 switch (fpclassify(test)) {
     case FP_SUBNORMAL :
       printf("%f is subnormal \n",test);
       break;

float test = 0.0;

 switch (fpclassify(test)) {
     case FP_ZERO :
       printf("%f is zero \n",test);
       break;















