#                      The written program has time complexity of (O(k * L)).
import murmurhash


bit_vector = [0] * 20

# Calculate the output of above murmur hash functions for Pikachu and Charmander...
 

murmur_pika = murmurhash.hash("pikachu") %20
murmur_char = murmurhash.hash("charmander") %20


# printing from murmur


print(murmur_pika)
print(         )
print(murmur_char)


# Calculating the array of bits for Pikachu and Charmander...

bit_vector[murmur_pika] =1
bit_vector[murmur_char] =1


# printing the obtained array / bit vector...
print(         )
print(bit_vector)


# A wild bulbasaur appears...

murmur_bulb = murmurhash.hash("bulbasaur") %20

# printing 
print(         )
print(murmur_bulb)

# printing bit array for bulbasaur...

print(         )
print(bit_vector[murmur_bulb])