# this is an implementation of fibonacci series using conceptual classes...

class Fib_Arr :
    def __init__(self, length):
        self.length = length # defining length of the series.
        self.storage = {} # cache storage.

    # using dunder method a.k.a magic method...
    def __getitem__(self,pos) :
        if 0 <= pos <= self.length :  # checking if the the length is not negative.
            if pos in self.storage :
                return self.storage[pos]
            if pos < 2 :             # either 0 /false  -or- 1/true.
                return pos
            else :
                result = self[pos-1] + self[pos-2]  # as if ( 4 = 3 + 2) , Then result = 5 = 4 + 3
                self.storage[pos] = result
                return result
        else :
            raise IndexError("Index Error : out of reach !")

    # length object...
    def __len__(self) :
        return self.length
    
    # iterator object...
    def __iter__(self):
        for i in range(self.length) :
         yield self[i] # to form a sequence using length.

# creating a fibonacci series...

fibs = Fib_Arr(12) # here length = 12         

print(fibs[7]) # iterates upto 7 times

print(list(fibs)) # iterates the whole length upto 12