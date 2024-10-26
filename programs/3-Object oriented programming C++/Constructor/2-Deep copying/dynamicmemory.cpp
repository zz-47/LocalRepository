#include <iostream>

     using namespace std;

     // In deep copying do not allow default copy constructor / it requires custom copy constructor.
       
       // if pointed on memory address in heap 1 time , it'll never be used again.

     
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
                
               student(student &obj){          //      Changings :
                  this -> name = obj.name;
                   cgpaPtr = new double; // allocation in heap for changing / 2nd object. 
                  *cgpaPtr = *obj.cgpaPtr;  // dereferencing.
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
                  s2.name = "Amna";
                *(s2.cgpaPtr) = 6.9;  // thisb will have no relation with s1's dynamic HEAP memory.
                
              s1.getinfo();

                // printing s2 seperately.
 
              cout << "There is no change in s1 , NOW printing s2 ..." << endl << endl ;

              s2.getinfo();

            
            return 0;
       }