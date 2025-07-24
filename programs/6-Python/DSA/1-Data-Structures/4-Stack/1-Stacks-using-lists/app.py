# creating stack class...

class Stack :
    
    # initiallizing list to store stack elements.
    def __init__(self) :
        self.items = [] # empty list

    def if_empty(self) :
        # checking if list is empty/

        return len(self.items) == 0    # returns True is empty and viceversa.
    
    def push(self, item) :
        # adding element to stack.

        self.items.append(item) # adding 
        print(f'Pushed {item} to the stack...')

    def pop(self) :
        # removing element from stack.

        # checking if stack is empty or not
        if self.if_empty() :
            raise IndexError(" Stack UnderFlow Error : Stack is empty.")
        item = self.items.pop()
        print(f'Popped {item} off the stack.')
        return item 
    
    def peek(self) :
        # returning top element of stack.

        if self.if_empty() :
            raise IndexError(" Stack Error : cannot peek from empty stack.")

        return self.items[-1] # last element of list
    

    def size(self) :
        # returning size of stack.
        
        return len(self.items)
    
    def display(self) :
        
        if self.if_empty():
            print('Error : Stack is empty !')

        else :
            print("Stack (Top -> Bottom)")
            for item in reversed(self.items):    
                print(item)

# printing / calling using main method...

if __name__ == "__main__" :

 s = Stack()

 s.push(20)
 s.push(30)
 s.push(40)
 print(" ") 

 print("Top of the Stack is : ", s.peek())
 print("The size of the Stack is : ", s.size()) 

 print(" ")

 s.pop()
 s.pop()
 s.pop()

 print(" ")

 print("Is the Stack empty ? : ", s.if_empty())   


    

