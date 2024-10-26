#include <iostream>  //  concept of (SETTER (setTitle)  &  GETTER(getTitle) methods.)

     using namespace std;

      // making class Biilboard.
         class Billboard
         {
            // making a private variable.
            private:
            string title;

             // now changing variable scope so our functions can be public.
                 public:

                       // creating a function .
             /*Setters mtethod*/  void setTitle(string x){ // we'll assgn var x to private section ,as.
                               title=x;
                            }
             /*Getters method*/ string getTitle(){  // getTitle can only be string as returning datatype.
                                 return title; // this function will only return value of title.
                                }                                

         }; // semi colon is compulsory.
    
     int main()
    {
       
     // making an object .

         // writing class name.
              Billboard bill;  // Billboard=Class_name    &      bill=Object_name.
                 
                  // Now calling a function with setter method.
                     bill.setTitle("Top 5 songs of 2024"); // assigns value to private variable.
                         
                          // Now useing Getter method.
                             cout << bill.getTitle() << endl;  //gets us the content we just stored in setter method.
       return 0;
    }