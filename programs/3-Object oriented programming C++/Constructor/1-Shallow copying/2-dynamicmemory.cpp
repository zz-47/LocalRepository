#include<iostream>

     using namespace std;

        //  everything INSIDE A STACK MEMORY , but cgpa will be used as pointer through heap memory.

     class student
     {

        public:
          
           string name;
            double* cgpaPtr;

           // creating a constructor

           student(string name, double cgpa){

            this -> name = name;
            cgpaPtr = new double;// dynamically allocating memory address of float type to cgpaptr inside heap
                           // here datatype should be same as previous.
             // dereferncing , then stored cgpa thier.
             
              *cgpaPtr = cgpa;
           }
            // creating cutom copy constructor.
                
               student(student &obj){
                  this -> name = obj.name;
                  this -> cgpaPtr = obj.cgpaPtr;
               }  

             // creating a display function.

             void getinfo(){ 

                 cout << endl << " Name : " << name << endl;
                  cout << " cgpa : " << *cgpaPtr << endl << endl;  // here *cgpaPtr (*) is impotant for dereferencing
             }
     };   

       int main()
       {

          student s1("Ali", 8.9); // calling a constructor.

           // creating a shallow copy constructor

             student s2(s1); // one constructor as parameter of another.
              
              // changing value stored in cgpaPtr (After dereferencing)

             s1.getinfo();    
                *(s2.cgpaPtr) = 6.9;     // dereferencing 
                
              s1.getinfo();

              cout << "If Ali was s1 ,then after changing cgpa of s2 the value of Ali's cgpa also changed " << endl;
                 cout <<endl << "      ***  this is the issue of dynamic allocation in shallow copying  ***"<<endl<<endl;
            return 0;
       }

       /*
            what happened really?

              suppose an object s1 having info :

                           name = ali
                        cgpaPtr = 555  // memory address in HEAP .

                a shallow copy constructor copys it as it is: 

                        s2 :

                         name = ali
                        cgpaPtr = 555  // getinfo(); will always target value in address in HEAP 555 , and    
                                          *(s2.cgpaPtr) = 6.9;  overwrited at the location.     
              
              // both cgpaPtr of s1 and s2 are pointing at same address in HEAP . 

              //  even default constructor will show same issue.
        */