# This implementation works with np module of Numpy lib...
import numpy as np

# one dimentional array...

arr1 = np.array([1, 2, 3, 4, 5])
print("1-D Array : ",arr1)

# 2-D Array...

arr2 = np.array([[1, 2, 3], [4, 5, 6]]) # 2-by-3 martic
print("\n2-D Array : \n",arr2)


# 3-by-3 martic...

arr3 = np.array([[[1, 2], [3, 4]], [[5, 6], [7, 8]]])
print("\n3-D Array : \n",arr3)



# CREATION Methods

# printing zero matric...

zero_martice = np.zeros((2, 3))
print("The Zero matrice : \n\n",zero_martice)

# printing matric having all ones...

one = np.ones((3, 2))
print("The matrice having all ones : \n\n", one)

# printing identity matrice...

identity = np.eye(3)
print("The identity matrice i : \n\n",identity)


# printing ranged array with spaced values using arange() func...

range = np.arange(0, 10, 2) # here args are that count multiples of 2 , from 0 - 10

print("\nThe Ranged array : ",range)


# printing array using line space function...

line_space = np.linspace(0, 1, 5) # here args are that count multiples of 5 from 0 - 1, with perfect line spacing.

print("\nThe space multiples of 5 are : ", line_space)