#                                 it is a recrusive version on binary search / do not uses loops.

def binary_search(arr, low, high, x):

#                     setting up main statement...    
    if high >= low :

        mid = (low + high) // 2

        if arr[mid] == x :
            return mid
        
#                           if the x is smaller than x , then searching in left half...        
        elif arr[mid] > x :
                return binary_search(arr, low, mid-1 ,x)
        
#                           else the x is greater than mid , then searching in right half...
        else :
             return binary_search(arr, mid + 1, high, x) 

    else :
         return -1 #  if value is not in the indexes
    

#                           setting up the defined function as main...
if __name__ == '__main__' :

 arr = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

# taking user value to be found on an index...

x = int(input("please enter a value : "))

#      callig the function...

result = binary_search(arr, 0, len(arr)-1, x)

if result != -1 :

    print(f'The value {x} is present at index {result}.')

else :

    print(f'The value {x} is not present at any index !')    
