#include<iostream>
#include<string>

     using namespace std;

    // creating a base class parent 
     
      class parent {

       public :

          void getinfo(){
            cout << "\nIt's parent class !\n" << endl;
          }
      };

       // creating a derived class child 
         
        class child : public parent {     // associated with public part of parent class.
  
           public :

               // calling a public member of parent class...
                   
                 void getinfo(){
                     cout << "\nIt's child class ! , I override parent class\n" << endl;
                 } 
        }; 


    /*

                       Above function   getinfo(); in child class   OVERRIDES     the function  getinfo();
                         in parent class
                         
    */

    
    
    int main()
    {
      // creating an object(p1)
       
         parent p1;

        // creating an object(c1)

          child c1;

            // simply calling the parent funtion ...

              p1.getinfo();
     
             // calling    overrider    function getinfo()  using object of class child{}
 
                 c1.getinfo();

        return 0;
    }