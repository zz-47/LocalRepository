#include <iostream>
#include <string>
        
    using namespace std;

   // thispointer (->) is a special pointer in C++ ,that points to the current object in code.
     
     // this->prop   is same as    *(this).prop
     
     /*
          suppose an object   obj1 , we are calling a function of obj1 as , 
              
               obj1.func();   // here we can refer to the properties of obj1 in 2 ways :

               1- we can refer to properties by writing properties of the object
                                       OR
               2- we can refer to properties as :

                   this->property
     */
    
    // we can assign the values of datatypes mentioned in constructor to simple datatypes
    
    class Employee
    { 
      private :  

       int Id;
        double income;
       
      public:
       
   
        string name;
         string department;
         
          // creating a parameterized single constructor // no overloading is occuring. 
            Employee(int Id,string name,string department,double income){
                 
                  // now working with thispointer as (this -> dataype = parameter of constructor)

                  this -> Id = Id;
                  this -> name = name;
                  this -> department = department;
                  this -> income = income;
            }  
 
     
        // no need to include department changer function as there is no overloading present.

           void getinfo(){                        // function to display datastored inside the constructor.
               cout << endl << "Id : " << Id << endl;
               cout << "Name : " << name << endl;
               cout << "Department : " << department << endl;
               cout << "Income : " << income << endl <<endl;
           }
        };
    int main()
    {
         // creating object / calling constructor to alocate memory location.
            // assigning data to datatypes .

            Employee e1(1,"John","accountant",1500);
             e1.getinfo();    // always include object with function.
        return 0;
    }

    /*
         working of this->ptr :

            if the address value of an object is 1000.
             ,then this->ptr will also contain address value 1000.

            //   suppose we declare a simple pointer :

                int x;
                  int* ptr = &x ; // stores address of above integer variable x.

                  *ptr // * = defreferncing operator

            // structure / comparision with thisptr

               class obj;  // created object with locaton value (1000x100)
                  
                  (*this).prop // assigning property
                     
                      // here *this = 1000x100 = address of object obj.

                      // in short we can write ((*this).prop) ,as (this->prop) //also here this equal to same value.

                     // arrow operator (->) is just used as (*) ,which looks pmore complex.                
    
          // the concept of thisptr is same as integer ptr.
    */