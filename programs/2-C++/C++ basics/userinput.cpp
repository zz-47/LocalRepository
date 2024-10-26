 #include<iostream>

  using namespace std;

  int main()
  {
    int age1 ;
    float salaray1 ;
    double  balance1 ;
    char licence1 ;
    bool id1 ;

cout <<endl<<"please enter your info to test"<<endl;    
  
  cout << endl << "enter age : ";
      cin >> age1 ;
  cout << endl << "enter salary : ";    
      cin >> salaray1;
  cout << endl << "enter credits : ";    
      cin >> balance1;
  cout << endl << "enter Grade of licence : ";   
      cin >> licence1;
  cout << endl << "enter if credentials are true or false : ";     
      cin >> id1;

cout <<endl<< "Results of testation"<<endl<<endl;

         cout << "age : " << age1 <<endl;
         cout << "Salary : " << salaray1 <<endl;
         cout << "Credits : " << balance1 <<endl;
         cout << "driving licence : " << licence1 <<endl;
         
  cout << "Above info can be : True=1/False =0" <<endl;
         cout << "value of given info is " << id1 <<endl<<endl<<endl;

    
    return 0;
  }