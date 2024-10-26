#include<iostream>
#include<string>

     using namespace std;

    class parent{
     public :
       
     // creating a function , that is suppposed to be used in derived class.
        virtual void message(){
           cout << "\n A messange from DAD \n\n";  // message will be overridden.

             // above function can't be called straight away.
        }
    };

        class child{
            public :

            // creating a function to use and override the virtual func();
              void message(){
                cout <<"\n A replay to DAD's message \n\n";
              }
        };
   
    int main()
    {
       // creating objects :
         parent p1;
          child c1;

           // calling functions using object...

           //simple call to parent.

            p1.message();

             cout << "AFTER ,overidding / Re-implimentation the above virtual function..." << endl;

            c1.message();

        return 0;
    } 