/*
  Constructor : special method invoked automatically at time of object creation // used for initiallization

       > constructor has same name as class
       > constructor doesn't have a returntype 
       > only called once (automaticaly), at object creation / create by programmer.
       > memory allocation occurs when constructor is called.
*/

#include <iostream>

      using namespace std;
    
    class Teacher
        {
          public:
          
          Teacher(){  // non-parameterized constructor.
            cout << endl << " Constructor as Transition ! " << endl; // constructor is always public member of class
          }              // constructor assigned.

          string name;
          string subject;   // class datatypes related to a person Teacher.
          double pay;
        };
              
             int main()
            {

              Teacher t1;  // created a object , but no constructor was called  / above created constructor is called.
              
                t1.name = " Zeeshan ";
                  cout << t1.name << endl;
                   
                    t1.subject = " Kali Linux " ;
                      cout << t1.subject << endl;

                        t1.pay = 300000  ;
                          cout << " " << t1.pay << endl;

              Teacher t2;  // constructor is always upon creation of every new object 

                 t2.name = " KK07 ";
                   cout << t2.name << endl;

                     t2.subject = " Ubuntu ";
                        cout << t2.subject << endl;

                         t2.pay = 200000;
                            cout << " " << t2.pay << endl;
             return 0;
            }