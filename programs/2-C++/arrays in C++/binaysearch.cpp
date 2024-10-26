 //  --------------------------    Binary search has Runtime complexity of O(2logn) -----------------------------------
#include<iostream>

  using namespace std;

 int binarySearch(int array[] , int n , int key)
  {
    int s =0;  // Starting point .
    int e =n;  // Ending point .

      while(s<=e)
      {
        int mid = s+e/2 ; // Here s+e = full sizeofarray & we find mid by full/2 .
        
        if(array[mid] == key)
        {
          return mid;
        }
        else if (array[mid]>key)      // here case says ,that if our key is present in first half of the array.
        {
         e=mid-1; // here we moved the end backwards till 1 element after the mid .
        }
        else                         // here case says , that if our key is present in second half of the array                       
        {
         s=mid+1; // here we moved the starting point forwards till 1 element before mid .
        }
      }
      return -1;
  }

    
    int main()
  {
    int n; 

   cout << "Enter size of array : ";
      cin >> n;
    int array[n];
   cout << "Enter array elements : ";
     for (int i = 0; i < n; i++)
    {
      cin >> array[i];
    }
      
   int key;
   cout << "Enter key : ";
      cin >> key;
   cout << "The key is " << binarySearch(array,n,key); 
   return 0;
  } 