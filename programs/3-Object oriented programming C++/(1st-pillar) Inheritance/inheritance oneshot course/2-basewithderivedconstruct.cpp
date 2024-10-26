#include<iostream>
#include<string>

      using namespace std;

       // constructor are called in parent / base 1st parent/base , then child / derived

      // supposed class with attributes
       
        class person
        {
        // access modifier.
         public:    
          string name;
           int age;

          // base / parent constructor
             person(){
              cout << endl << " firstly Calling base constructor ... " << endl << endl;
                
             }
        };
             // supposed class to inherite attributes

                 class student : public person        // inheriting publically defined part of parent class.
                 {
                     
                      public:

                         int rollno; 

                          // derived / child constructor.

                            student(){
                                cout << endl << " , then Calling derived constructor " << endl << endl;

                            }

                     // func(); to show data inherited by class person + newly created int rollno.

                        void giveinfo(){
                             cout << endl << "Name : " << name << endl;           // inherited
                              cout << " Age : " << age << endl;                   // inherited    
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