
#                     The give Data sturctue have complexity of O(n)....

# Staring the code for linear search recursive approach

def linear_search(arr, target, index=0):

    if index >= len(arr):  # handling exception of non existant target...
        return -1
    
    if arr[index] == target :
        return index
    return linear_search(arr, target, index+1)   # here index+1 is used as increement counter.

arr = [10 ,20 ,30 ,40, 50] 

target = int(input("enter your required number : "))

# performing recursive linear search.
index = linear_search(arr, target)

if index != -1:
    print(f'The target {target} is found at index {index}')
else :
    print(f'The target {target} not found !')