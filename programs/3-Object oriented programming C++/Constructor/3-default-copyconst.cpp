#include <iostream>

     using namespace std;

     /*
        Copy constuctor :

                copy constructor is a special type of constructor(default) ,that is used to copy 
                      properties of one object obj1      to     second object obj2 
      
         .i.e if we don't create a copy constructor , the system will automatically create it upon creation of 
                                     second object of a class.
     */

        class professor
        {
         private:
            double fee;
           
            public:
              // datatypes / properties.
                string name;
                 string department;
                  string subject;
                   int avail;
                
                // creating a simple parameterized constructor.
             professor(string name, string department, string subject, int avail, double fee ){
 
              this -> name = name;
              this -> department = department;
              this -> subject = subject;
              this -> avail = avail;
              this -> fee = fee;
            }

             // output function.

               void showoutput(){
                 

                  cout << endl << " Name prof." << name << endl;
                   cout << " Department : " << department << endl;
                    cout << " subject of experties . " << endl;
                     cout << " Availabe " << avail << " days per week " << endl;
                      cout << " perhour fee : " << fee << endl << endl; 
                    cout << "             copying via (copy constructor)  ..." << endl << endl;     
               }
        };
    
    
    int main()
    {
      
        // creating an object / calling simple constructor.

          professor prof1("Tariq", "Computer science", "programming", 4, 10000);
         prof1.showoutput();  

           // calling a Copy Constructor...
            
             // using above constructor as parameter of copy constructor to copy data to above constructor.

             professor prof2(prof1); // default copy constructor of c++.
              prof2.showoutput();
      
        return 0;
    }

               /*
               
                   Working of COPY CONSTRUCTOR :

                        COPY constructor just clones the data of Construtor used as parameter.

               */