#include<iostream>
#include<string>

     using namespace std;

      
      class person
      {
       public:
             string name;
         
          // non-parameterized constructor.
          person(){
           cout << endl << " I'm a non - parameterized constructor ..." << endl;
          }
               // parameterized constructor.
               person(string name){
                    this -> name = name; // assigning value.
                     
                     cout << endl << " I'm a parameterized constructor ..." << endl; 
               }
      };

           int main()
         {
            
          // 1- calling non - parameterized constructor. 

             person p1;

               // 2- calling parameterized constructor.
              
                 person p2("zeeshan");

              return 0;
         }