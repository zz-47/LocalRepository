/*
     There are examples of :
         
          > assigning and geting values inside a constructor.
          > Constructor overloading (using 2 or more constructors at same time) , which is example of polymorphism.
*/ 
#include <iostream>

       using namespace std;

       
        class Teacher
        {
        private:

           string name;
           string dept;
           string subject;
           double salary; 
        
        public:

        // creating a secondary constructor to demostrate constuctor overloading.
           Teacher(){
              dept = "computer science ";
           }
      // creating a parameterized constructor.             // assigning parameters to variables 
           Teacher(string n,string d,string s, double sal): name(n),dept(d),subject(s),salary(sal){}
         
          void changedept(string newdept){
             dept = newdept; // used to change salary type/value.
          }  // changes dept = "computer science";   to newdept = " programming ";

          void getinfo(){  // to display variables that store parameters of constructor 
              cout << "name : " << name << endl;
               cout << "department : " << dept << endl;
                cout << "subjet : " << subject << endl;
                 cout << "salary : " << salary << endl; 
          }
        };
            int main()
            {
              
              Teacher t1("zeeshan","programming","SQL",120000);  // calling constuctor for assigning values.
                           // creating object / constructor.
               t1.getinfo();
                           // calling out a function to output data stored in constructor.              
              return 0;
            }