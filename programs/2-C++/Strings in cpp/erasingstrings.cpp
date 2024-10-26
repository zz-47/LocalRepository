#include<iostream>
#include<string>
  using namespace std;

   int main()
  { 
   
  string str = "123456789";

     str.erase(3 , 4); // here first number show index where to start -&- how many onward indexes to erase.  
       cout<< str <<endl; 
     return 0;
  }