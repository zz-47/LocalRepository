#include <iostream>

     using namespace std;
 
     int main()
     {
        
         int button;

          cout << "Enter language option 1-4 : ";
             cin >> button;
            switch(button)
            {
              
              case 1 :
                 cout << endl << "*** language set to (English) ***" << endl << endl;
                break;

                      case 2 :  
                       cout << endl << "*** language set to (Spanish) ***" << endl << endl;
                    break;

                        case 3 :
                            cout << endl << "*** language set to (Deutch) ***" << endl << endl; 
                        break;

                              case 4 :
                                   cout << endl << "*** language set to (Russian) ***" << endl << endl;
                              break;
                    default :
                 cout << endl << " oops , out of options !" << endl << endl;              
            }
        return 0;
     }