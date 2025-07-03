#                                    it a iterative version of binary search  /  uses while loop
def binary_search(arr, low, high, x):

    while low<=high :

        mid = (low + high) // 2            
 #      .i,e mid = low = 1 + high = 5  // 2   == 6
                              
#      conditon to consider first operation to be checking that the target is middle value

        if arr[mid] == x: 
         return mid
#      condition to start checking forward from mid value.

#      gives functionality to move forward ignoring the low part / left half
        elif arr[mid] < x:

         low = mid + 1   

#      gives functionality to move to the left half if value is not found in right half.        
        else:

         high = mid -1  

    return -1        
 
#       using binary_search (__name__) =  main function
        
if __name__ == '__main__' :

 arr = [ 10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

# taking userinput...

x = int(input("please enter a value : ")) 

#       here [ len(arr)-1 ] terminates the function before array ends.

result = binary_search(arr, 0, len(arr)-1, x)           

if result != -1 :

    print (f'The value {x} is found at index {result}')

else :
     
    print (f'The value {x} is not found at any index')










 


