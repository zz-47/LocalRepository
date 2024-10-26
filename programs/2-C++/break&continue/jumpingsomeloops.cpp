#include<iostream>
  //                ***  This program is a shopping assisstant ,that guides through odd days and pocketmoney  ***

     using namespace std;


     int main()
       
     {
       
         int pocket_money;
          cout << "Please enter pocket money : ";
           cin >> pocket_money;

        for(int date = 1 ; date <30 ; date++ )
        {
            // for jumping odd dates.
           
             if ( date % 2 == 0){

             continue; // Used to skip toe odd days.
                }
                     
                  if(pocket_money == 0){

                 break; // for stopping the shopping before bankrupcy.
            }  
       
          cout << "You can go shopping ! " << endl;  
             // deduction of 2000 after every shopping session .
         pocket_money = pocket_money-2000;
        }
      return 0;
     }