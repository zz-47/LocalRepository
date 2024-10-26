#include<iostream>

     using namespace std;

        //                   INSIDE A STACK MEMORY.

     class student
     {

        public:
          
           string name;
            double percentage;

           // creating a constructor

           student(string name, double percentage){

              this -> name = name;
              this -> percentage = percentage;
           }
            // creating cutom copy constructor.
                
               student(student &obj){
                  this -> name = obj.name;
                  this -> percentage = obj.percentage;
               }  

             // creating a display function.

             void getinfo(){

                 cout << endl << " Name : " << name << endl;
                  cout << " percentage : " << percentage << endl << endl;
             }
     };   

       int main()
       {

          student s1("Ali",98); // calling a constructor.

           // creating a shollow copy constructor

             student s2(s1); // one constructor as parameter of another.
              s2.getinfo();
            return 0;
       }