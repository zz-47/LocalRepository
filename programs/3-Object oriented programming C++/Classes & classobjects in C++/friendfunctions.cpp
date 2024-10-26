#include <iostream>

     using namespace std;

    
     class MyId // protected class
     {
        protected:        // strted protected format.
          int data = 47;
           friend void showId(const MyId& obj); 
           // friend function with parameters to construct the subjected class and an object addressed to the class. 
     };

      // intiating friend function out side

          void showId(const MyId& obj){
                  cout << " Hacked into Idtype(MyId) , found required Id = " << obj.data << endl;
           }                      
            // Idtype should be compulsaryly int
   
    int main()
    {

     // intiallization of object obj of class MyId.
         MyId obj;
              showId(obj); // printing the protected Id.
      
      return 0;
    } 