#include <iostream>

     using namespace std;

     int main()
     {
        
        int num , num2;
      cout << "Enter two numbers to calculate : " << endl;
       cin >> num;
       cin >> num2;
        
          char op;
         cout << "Enter an operand to calculate : ";
           cin >> op;

             // Now starting switch...

                switch(op)
                {
                 case '+':
                  cout << num << " + " << num2 << " = " << num + num2 <<endl;
                          break;
                     
                     case '-':
                      cout << num << " - " << num2 << " = " << num-num2 <<endl;
                              break;

                        case '*':
                         cout << num << " x " << num2 << " = " << num*num2 <<endl;
                                 break;

                           case '/':
                            cout << num << " / " << num2 << " = " << num/num2 <<endl;
                                    break;

                              case '%':
                               cout << "remainder of " << num << " / " << num2 << " is " << num%num2 << endl;                          
                 
                     default :

                   cout << " Error (check if your operand is correct ? )" << endl; 
      
                } 
        
        return 0;
     }