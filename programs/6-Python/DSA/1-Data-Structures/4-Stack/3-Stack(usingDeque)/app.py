from collections import deque

class Stack :
    def __init__(self) :
        self.stack = deque() # using deque to implement stack

    def push(self, item) :
        self.stack.append(item)

    def pop(self) :
        
        # checking if the stack is allready empty.
        if self.empty():
            raise IndexError( "Stack Underflow : Cannot pop from an empty stack." )
        return self.stack.pop()

    def peek(self) :
        if self.empty():
            raise IndexError( "Stack UnderFlow Error : Cannot peek from an empty stack." ) # Thread safe method
        # returning top most item
        return self.stack[-1]
    
    def empty(self) :
        # returning length of stack = 0
        return len(self.stack) == 0
    
    def size(self) :
        # returning length of stack
        return len(self.stack)
    
    # giving out stack as String....
    def __str__(self) :

        return f'Stack : {list(self.stack)}'
    
# input >>>

s = Stack()
s.push(20)
s.push(40)
s.push(60)

print( s)
print("The size of stack is :", s.size())
print("The Top most Item :", s.peek())

print("\nPopping top most item :", s.pop())

print("\nThe Top most Item :", s.peek())
print("The size of stack is :", s.size())

print("\nPopping top most item :", s.pop())
print("\nPopping top most item :", s.pop())

print("Is the Stack empty ? :", s.empty())