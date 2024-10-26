#include<iostream>
#include<string>

     using namespace std;


    class person  // class with b attributes.
    {
       public :

          string name;
            int age;

             // creating a parameterized constructor.

                person(string name,int age){
                    this -> name = name;
                     this -> age = age;
                }
    }; 

         class student : public person 
         {
            public :

               int rollno;
//                                                             explicit call to constuctor 1
                 student(string name , int age , int rollno) : person(name, age){ 
                    // all 3 attributes.

                     this -> rollno = rollno;
                 } 

            void giveinfo(){

                    cout << endl << " Name : " << name << endl ;
                     cout << " Age : " << age << endl;
                      cout << " Rollno. " << rollno << endl << endl;
            }       
         }; 


         int main() 
         {
          
            student s1("M.zeeshan", 17 , 121969);

               s1.giveinfo(); 
          
            return 0;
         } 