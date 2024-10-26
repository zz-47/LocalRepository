#include <iostream>


     using namespace std;

     // creating a class with constructor n destructor.
     class abc 
     {
      public :
         // calling a constructor
            abc(){
               cout << " Constructor \n";
            }

          // calling a destructor 
           
        ~abc(){
            cout << " Destructor \n";
        }

     };
    
    
    
    int main()
    {
       if(true){
        static abc obj; // statically calling constructor... 
       } 

        cout << " End of main function ..." << endl; // end of int main()

       // destructor will be called here , because a static obj lasts the life time of program 
        return 0;
    }