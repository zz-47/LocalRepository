#include <iostream>

     using namespace std;

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

             // manually creating custom copy constructor
                                 // passing by reference.
             professor(professor &orgObj){         // passing the address of orignal Object as a parameter  
              // assigning / copying
           
              cout << " HI ! , there I'm custom copy constructor " << endl << endl;
               
                this -> name = orgObj.name;
                this -> department = orgObj.department;
                this -> subject = orgObj.subject;
                this -> avail = orgObj.avail;
                this -> fee = orgObj.fee;
             }

             // output function.

            void showoutput(){
                 

                  cout << endl << " Name prof." << name << endl;
                   cout << " Department : " << department << endl;
                    cout << " subject of experties . " << endl;
                     cout << " Availabe " << avail << " days per week " << endl;
                      cout << " perhour fee : " << fee << endl << endl;     
             }
        };           


     int main()
     {
    
        professor prof1("Tariq", "Computer science", "programming", 4, 10000);
         prof1.showoutput();

         professor prof2(prof1);
          prof2.showoutput();
      
        return 0;
     }