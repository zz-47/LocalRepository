import array

# array of integers ...

int_array = array.array('i' , [10, 20, 30, 40, 50])

# here ' i ' is to specify integer type.

print(" The Array of integers : ", int_array)

# method to access specific index elements.

"""
print("1st Element : ", int_array[0])
print("2nd Element : ", int_array[1])
print("3rd Element : ", int_array[2])
print("4th Element : ", int_array[3])
print("5th Element : ", int_array[4])

"""

# method to loop through whole array.

print("\nAll elements in array : ")
for item in int_array :
    print(item)



# adding elements in array. 

# append method...

int_array.append(60)
print("\nAfter the append : ", int_array)

# Extend method...

int_array.extend([70,80])
print("After the Extension : ", int_array)


# Deleting Elements from array.

# remove method...
int_array.remove(20) # removes occourence of 20 in array
print("\nAfter removing : ", int_array) 

# Pop method...
int_array.pop(0) # removes integer at index 1
print("After the pop : ", int_array)


# Inserting Elements to array.
int_array.insert(1,25)
print("\nAfter Insertion at index : ", int_array)


# searching the occurence of elements...

index_of_60 = int_array.index(60)
print("\nIndex of 60 is ", index_of_60)


# counting the occourences of the elements...
count_50 = int_array.count(50)
print(f'\nThe element 50 is present {count_50} times')


# printing memory addresses and length...
print("\nBuffer Info ( Memory address ,Number of elements ) : ", int_array.buffer_info() )


# printing reversed array...
int_array.reverse()
print("\nReversed array is : ", int_array)
