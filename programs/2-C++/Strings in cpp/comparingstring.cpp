#include<iostream>
#include<string>
  using namespace std;

   int main()
  { 
       string s1 = "abc";
       string s2 = "xyz";

    cout<< s2.compare(s1) <<endl;     
  // As the xyz is greater ,than abc it will show (positive + )value or if changes behaviour will be viceversa (negative - ) .
  return 0;
  }