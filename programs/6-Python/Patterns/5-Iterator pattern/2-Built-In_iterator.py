# This code demonstrates the built-in iterator in Python

# using utillity functions for specifi iterations...

def InBuilt_Iterator1():
    alphabets = [chr(i) for i in range(65, 91)]

#  using built in iterator for python

    for alpha in alphabets :
      print(alpha, end = ' ')

    print()

def InBuilt_Iterator2():
   alpahabets = [chr(i) for i in range(65, 123)]

# using built in iterator 

   for alpha in alpahabets :
      print(alpha, end = ' ')

   

if __name__ == "__main__" :

   # calling 1st iterator function

   InBuilt_Iterator1()

# calling 2nd iterator function

   InBuilt_Iterator2() 