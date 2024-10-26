#include <iostream>
     using namespace std;

    int main()
    {

     int decimal;
      
      for ( int i ; i < 100 ; i++ ) {
       cout << endl << "enter value to get remainder : ";
        cin >> decimal ;

         cout << " Quotient = " << decimal / 2 << endl;  
          cout << " remainder = " << decimal % 2 << endl;
       }
          
       return 0;
     }