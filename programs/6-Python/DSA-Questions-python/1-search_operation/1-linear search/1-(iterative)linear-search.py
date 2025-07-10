
#                     The give Data sturctue have complexity of O(n)....

# starting the linear search mechanism iterative approach...

def linear_search(arr, target):

    for index in range(len(arr)):    # using for loop for iterative approach.
       if arr[index] == target:
           return index   # if target is on valid index.
    return -1   # if the index is not found / is invalid.


arr = [10 , 20 , 30 , 40 , 50] # simple array

target = int(input("Please give a number form range ( 10 - 50 ):"))

#performing linear search ...

index = linear_search(arr, target)

if  index != -1:
    print( f'The target is {target} is found at {index}' )
else:
     print( f'The target {target} not found ! ')