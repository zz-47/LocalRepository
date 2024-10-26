#include <iostream> //  concept of           (Destructors).

      using namespace std;

    class Gambit 
    {
        // creating a public access modifier
             public:
             // creating constructor named same as class.
                 Gambit(){
                    cout << "Hello ! , I'm from Inside constuctor(Gamebit)..." << endl;
                 }
            // creating a destructor named ~ the name of class.
                 ~Gambit(){
                     cout << "Hello ! , I'm from Inside Destructor(~Gambit)..." << endl;  
                 }
        // creating a displayv funtion to demonstrate ther working of destructor after constructor. 
         void display(){
           cout << "Hello , there..." << endl;
        }         
    };
      
      int main()
      {
        // creating a class gambit having object gam
             Gambit gam;  // constructor is triggered to print message inside constructo
                 //  calling a function to display our object gam.
                     gam.display(); //after going back to main it comes here
                // after diplayfunction destructor shows its message and destroys object gam;
        return 0;
      }