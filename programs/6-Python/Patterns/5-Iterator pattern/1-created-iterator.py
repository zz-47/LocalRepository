#  this code demonstrates the created iterator pattern...

# using helper method for iterator

def alphabets(letter) :
    # counts upto 5 letters
    for i in range(65, ord(letter) + 1) :
        
        yield chr(i)

if __name__ == '__main__' :

    alphabets_upto_R = alphabets('R')
    alphabets_upto_Z = alphabets('Z')

for alpha in alphabets_upto_R :
    print(alpha, end = ' ')      

print()

for alpha in alphabets_upto_Z :
    print(alpha, end = ' ')

