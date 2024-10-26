
#include<iostream>
#include<climits>     // This is used to give value to INT of MIN/MAX  (Smallest/Largest integer value) .

    using namespace std;

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
        int max_no = INT_MIN;      // Here INT_MIN is given so every element of array[i] is always greater so is updated.
        int min_no = INT_MAX;     // Here INT_MAX is working as viceversa of above.
       
       // both about for maximum num and minimum num.

         for(int i=0 ; i<n ; i++)
         {
          max_no=max(max_no , array[i]);
         // Here max() is abuiltin function in <climits> used to compare (max_no & array[i])

         min_no=min(min_no,array[i]);
        // Here min()  works same ,but for vice versa.
        } 
     cout << "Max : " << max_no << endl << "Min : " << min_no;   
      return 0;
   } 