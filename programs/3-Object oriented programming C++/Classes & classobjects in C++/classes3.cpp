#include <iostream>    // concept of          (Constuctors)
#include <string>

     using namespace std;

    class Billboard
    {
     // making private variable.
         private:
                 string title; // our tilte is only private

                 public:
                        // now creating a constructor in which we'll pass a string in main function();
                            Billboard(string b){
                                // we'll setTitle in side the constuctor Billboard
                                  setTitle(b); // here constructor is calling string.
                            }
                        // making function for setTitle method.
                    void setTitle(string a) // here constructor passes string to same function of setTitle.
                    {
                      title=a; // title is set to the string passed by constructor .i.e string a.
                    }
               // now making a returning function for string .i.e
            string getTitle(){ // if u're passing string function should be of same datatype .i.e string.
                // its only used to return the string tile.
                     return title;
            }                
    };

     int main()
     {
    
       // Making a parameterized constuctor of object.
           Billboard bill("Top 3 songs 2024");
             cout<<bill.getTitle(); // getting the parameters as output. 

        return 0;
     }