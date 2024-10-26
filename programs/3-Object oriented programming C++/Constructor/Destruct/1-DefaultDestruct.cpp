#include <iostream>
#include <string> 
     using namespace std;

    class student
     {
        public:
           
            string name; 
              double* cgpaPtr; // pointer of type double / de-allocation target.

               // creating a (parameterized) constuctor.

                student(string name, double cgpa){

                 this -> name = name;
                      
                   cgpaPtr = new double;  // Dynamical heap memory allocation
                       
                     *cgpaPtr=cgpa; // dereferencing on cgpaPtr / assigned value is stored instead of heap location. 
                         // cgpaPtr and cgpa are different.                
                 }

                  // creating a destructor 

                    ~student(){
                        // message.
                      cout << "Deleting statically allocated memory..."<<endl << endl;
                    } // this occurs automatically , when ever an object becomes useless

               // Creating a function to display output.

                 void getinfo(){

                      cout << endl << " Student Name : " << name << endl;
                       cout << " Student Grades : " << *cgpaPtr << endl << endl;  // dereferncing (*numPtr) is important.
                 }  
     };



            int main()
            {
               
               // assigning values to constructor datatypes.
                 
                   student s1("M.Zeeshan kayani",9.6);
                    s1.getinfo(); // taking output.

                   // no need to call a simple destructor / its automated.               
                return 0;
            }