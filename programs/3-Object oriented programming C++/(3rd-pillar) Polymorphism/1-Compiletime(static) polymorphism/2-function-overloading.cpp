#include<iostream>
#include<string>

      using namespace std;

     // creating a class ,that can print all sorts of datatypes.

      class print
      {
        public : 

         // carrying out function overloading , by creating multiple print functiions.

        // simple single function .
          void show(int x){
            cout << endl << " int = " << x << endl;
          }

//    function overloading starts from here ... 

        void show(char ch){
          cout << endl << " char = " << ch << endl;
        }
            
            void show(bool tf){
              cout << endl << " bool = " << tf << endl;
            }
            
        void show(double pt){
           cout << endl << " double = " << pt << endl; 
        }    
      };
     
     
     int main()
     {
        
        print p1; // creating object.

          p1.show('a'); // datatype selected automatically upon input.
        
        return 0;
     }  