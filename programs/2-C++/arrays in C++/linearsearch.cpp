  //--------------------------- The linear search has Runtime complexity of O(n) -------------------------------------
#include<iostream>

  using namespace std;

 int linearSearch(int array[] , int n , int key)
  {
    for(int i=0 ; i<n ; i++)
    {
      if(array[i] == key){
        return i;       // This is to stop the loop on appropriate index.
      }
    }
    return -1;             // this executes function if no index matches to key.
  }
    
    int main()
   {
    int n;
   cout << "Enter size of array : "; 
    cin >> n;

    int array[n] ;
      cout << "Enter array elements : ";  
     for(int i=0 ; i<n ; i++)
     {
      cin>>array[i]; // taking userinput upto n.
     }    
     cout << "key :";
      int key;  
     cin >> key;
      
       cout << "The key is on index "<<linearSearch(array,n,key);

    return 0;
   } 