import numpy as np

a = np.array([1,2,3])
b = np.array([[5],[6],[7]])

# indexing...

print("\nFirst element of a : ", a[0])
print("\nFirst element of b : ", b[0,0])

# index slicing...

# 1-D :
print("\nSlicing first two elements of a : ", a[0:2])
print("\nSlicing reverse elements of a : ", a[::-1])
# 2-D : 

print("\nSlicing first 2 elements of b : \n", b[0:2])
print("\nSlicing / Extracting the column of b : ", b[:,0])

# Checking the shapes of matrices...

print("\nThe order of matrice a : ", a.shape)
print("\nThe order of matrice b : ", b.shape)

# Sum of arrays : a & b

print("\nSum of matrice a : ", np.sum(a))
print("\nSum of matrice b : ", np.sum(b))


# finding max value in matrices

print("\nMax value in a : ", np.max(a))
print("\nMax value in b : ", np.max(b))

# finding mean value 

print("\nMean of martice a : ", np.mean(a))
print("\nMean of matrice b : ", np.mean(b))


# addition :

add = b + a
print("\nB + A : \n",add)

# Multiptication

mul = b * a
print("\nB X A : \n",mul)


# Reshaping the arrays...

 # 1-D array (a) to 2-D

a_reshape =  a.reshape(1, 3)
print("\nReshaped array (a) to 2-D : \n", a_reshape)

 # 2-D array (b) to 1-D / flattening
b_flatten = b.flatten()
print("\nFlattened 2-d array (b) to 1-D : \n", b_flatten)


# Boolean indexing...

mask_a = a > 1
print(f'\nMasking indexes {mask_a} from array (a)...')
print(f'\nFiltered {a[mask_a]} from array (a)...')

mask_b = b[:, 0] >= 6 # applies to middle most column...
print(f'\nMasking {mask_b} indexes from array (b)...')
print(f'\nFiltered indexes from array(b) : \n {b[mask_b]}')