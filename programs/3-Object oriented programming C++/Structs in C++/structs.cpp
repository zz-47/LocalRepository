#include <iostream>
#include <string>
#include <unistd.h>
#include <windows.h> // used for sleep();

      using namespace std;

    // stucts represent data structures in c++
      // these are used to store different , relevant datatypes under a single structure.
         // these ares used in projects to represent info of a single entity

         struct mystruct {
        
        int i;
        std::string s;
        char x;
        bool  b;

         // making a void func();'s to demonstrate functions in structs.
          
          // for start.

             void start(){
               cout << endl << "******    OPENING THE DATABASE    ******" << endl << endl << endl;
             }
            // for transition.

             void trans(){
               cout << endl << endl << " going to next person ... " << endl << endl << endl;
             }
             
             // for sign up
                
                void signup(){
                   cout << endl << endl << " Please Sign up to get your card ... "<< endl;
                }

                // for presenting card.

                   void updat(){
                      cout << endl << endl << " ***  Congrat's ! , You're Now signed up ,as a person  *** " << endl << endl;
                   }
           
            // for ending.

           void end(){
             cout << endl << endl << endl << " ***  Oops ! app not responding , card not saved  ***" << endl;
           }           
         };
    // structs are much more closer to classes as enclose different datatypes for info , than objects.
    
    int main()
    {
      // assigning name to my srtuct and assigning values to i,s and b.

      struct mystruct p1;

          p1.i=21;
          p1.s="alex";
          p1.x='F';
          p1.b= true;
          
        p1.start();  

        // printing struct p1 info

            cout << " Age of person 1 : " << p1.i << endl;
             cout << " Name of person 1 : " << p1.s << endl;
               cout << " Gender of person 1 : " << p1.x << endl; 
                cout << " INFO Validity : " << p1.b << endl;
                

             // giving out struct function.

                 p1.trans();

                   // now lets call a person 2 with undefined values.     

                   struct mystruct p2;

                         p2.i;
                         p2.s;
                         p2.x;
                         p2.b;        

                           cout << " Age of person 2 : " << p2.i << endl;
                            cout << " Name of person 2 : " << p2.s << endl;
                             cout << " Gender of person 2 : " << p2.x << endl;
                              cout << " INFO Validity : " << p2.b << endl;
                                 
                              // undined person / position is empty.   
                              p2.signup();                    


                               // Now signing up as person 3 , by useriput method.

                               struct mystruct p3;

                               p3.i;
                                cout << endl << " please enter your age : " ;
                                 cin>> p3.i;
                               p3.s;
                                cout << endl << " please enter your name : ";
                                 cin >> p3.s;  
                               p3.x;
                                cout << endl << " please enter your gender : ";
                                 cin >> p3.x;
                               p3.b;
                                cout << endl << " is the above info valid ? ";
                                 cin >> p3.b;

                                   // after taking info.

                                    p3.updat();  // presenting the info card.
                              
                              cout << " Age of person 3 : " << p3.i << endl;
                           cout << " Name of person 3 : " << p3.s << endl;
                        cout << " Gender of person 3 : " << p3.x << endl;
                     cout << " INFO Validity : " << p3.b << endl;         
 
                  // going to sleep.....
                   sleep(3);                 
               // making a not responding shutdown.               
            p3.end();  
         Sleep(1);
       return 0;
    }  