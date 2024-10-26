#include<iostream> //   simple concept of class / classobjects and object functions.

     using namespace std;

     class franchise
     {
        // writing access modifier.
         public:
           // creating a member function
               void clothshop1(){
                 cout << "We have high quality Shirts !" << endl;
               }
                     void clothshop2(){
                         cout << "We have high quality pants !" << endl;
                     }
     };


    int main()
    {
     
     franchise fran; // here franchise is class     and    fran is object.

       // printig shop 1 with help of object = (fran;).
           fran.clothshop1();

               // prin ting shop 2 , as  object.function();
                     fran.clothshop2();
     return 0;      
    }