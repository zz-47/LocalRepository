from queue import LifoQueue

class Stack :

    def __init__(self) :
        self.stack = LifoQueue() # using LifoQueue as stack storage.
        self._elements = [] # for debugging purposes.

    def push(self, item) :
        # using put function bound to LifoQueue
        self.stack.put(item)
        self._elements.append(item)

    def pop(self):
        if self.stack.empty():
            raise IndexError ("Stack UnderFlow Error : cannot pop ")
        item = self.stack.get()
        self._elements.pop()
        # using get func bound to LifoQueue
        return self.stack.get()

    # HERE the thread safty issue begins , as peek is not a functionality of LifoQueue
    def peek(self):
        if self.stack.empty():
            raise IndexError ("Stack UnderFlow Error : cannot peek ") 
        # our workaround is To pop , store and re-insert the item back.
        
        top = self.stack.get()  # pop the item , then store.
        self.stack.put(top)   # put back into stack.
        return top       # return stored item.
    
    def as_empty(self):
        return self.stack.empty()
    
    def size(self):
        # using built in qsize func of LifoQueue.
        return self.stack.qsize()
    
    def __str__(self):
        return f' Stack (top -> bottom) : {list(reversed(self._elements))}' 
    

s = Stack()
s.push(20)
s.push(40)
s.push(60)

print(s)

print("\n stack size : ", s.size())
print(" The top most item is : ", s.peek())
print("\nPopped out : ", s.pop())

print("\n The top most item is : ", s.peek())
print(" stack size : ", s.size())

print("\n Is the Stack Empty ? : ", s.as_empty())