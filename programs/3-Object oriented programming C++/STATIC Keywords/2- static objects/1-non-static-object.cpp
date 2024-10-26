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
        abc obj; // calling constructor... 
       } // destructor will be called here

        cout << " End of main function ..." << endl; // end of int main()
        return 0;
    }