#include<iostream>
#include<string>
  using namespace std;

   int main()
  { 
   
  string str = "123456789";
  
  string s = str.substr(2 , 5); // here also first is where to -&- second is how many indexes.

     cout << s << endl;
     return 0;
  }