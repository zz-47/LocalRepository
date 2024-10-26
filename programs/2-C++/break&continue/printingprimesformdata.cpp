#include <iostream>

     using namespace std;

      int main()
      {
       
       int a , b;

       cout << "please enter range in ascending order ..."<<endl;
      cin >> a;
       cout << "to" << endl;
      cin >> b;
       cout << endl << "Prime Numbers are : " << endl << endl;

         for(int num = a ; num <= b ; num++)
         {
            int i;

                  for( i = 2 ; i < num ; i++)
                 {
                      if (num % i == 0){
                        break; //  Removing no prime no.sin range a -> b.
                      }
                 }

             if (i == num){
                cout << num << endl; // printing every single prime in  a -> b range.
             }    
         } 
        return 0;
      }