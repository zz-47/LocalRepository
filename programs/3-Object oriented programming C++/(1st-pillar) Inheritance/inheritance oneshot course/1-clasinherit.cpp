#include<iostream>
#include<string>

      using namespace std;


      // supposed class with attributes
       
        class person
        {
        // access modifier.
         public:    
          string name;
           int age;
        
            // calling a constructor

             person(){
               
               string name;
                int age;
                
             }
        };
             // supposed class to inherite attributs

                 class student : public person        // inheriting publically defined part of parent class.
                 {
                    // creating datatypes of new class
                     
                      public:

                         int rollno; 

                     // func(); to show data inherited by class person + newly created int rollno.

                        void giveinfo(){
                           cout << endl << " Inherited info..."<<endl;
                             cout << endl << "Name : " << name << endl;           // inherited
                              cout << " Age : " << age << endl;                   // inherited
                           cout << endl << " Own info..." << endl;    
                               cout << endl << " Rollno. " << rollno << endl << endl;     // created.
                        }            
                 };

                 int main()
                {
                     // creation of object of inheriting class son.
                    
                     student s1;

                        // assigning values to datatypes.
                         
                          s1.name = " M.zeeshan ";
                           s1.age = 19;
                            s1.rollno = 131969;
                     
                       // giving ouput 

                           s1.giveinfo();

                    return 0;
                }