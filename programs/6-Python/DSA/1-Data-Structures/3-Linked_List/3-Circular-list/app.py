# creating node class...

class Node :
    def __init__(self, data):
        self.data = data 
        #     self.head = None is not present here because we need a working head.
        self.next = None # creating a tempory placeholder

class CircularLinkedList :

    def __init__(self):
        self.head = None        # initiating a head node

    def add(self, data):
        new_node = Node(data)
        if not self.head :
            self.head = new_node 
            new_node.next = self.head # pointing to head index

        else :
            next_node = self.head # changing places with head node.
            #  to distinguish b/w old and new head node.
            while next_node.next != self.head :  
                  next_node = next_node.next 
            next_node.next = new_node
            new_node.next = self.head # pointing to head index.   
            self.head = new_node    # changing head value

    def insert(self, data, index):
        new_node = Node(data)
        if index == 0 :
            self.add(data) # calling add func...
            return

        # searching boundaries
        next_node = self.head
        for i in range(index-1) :
            if not next_node :
                return " index don't exist "
            # moving forward...
            next_node = next_node.next   
            index += 1             
        
        if not next_node.next :
            return "Index not in Boundaries of list"
        
        new_node.next = next_node.next
        next_node.next = new_node
        



    def append(self, data):
        new_node = Node(data)
        # If there is no head node . 
        if not self.head:
            self.head = new_node # creation of first node / head.        
            new_node.next = self.head  # pointing towards it self to form a circular formation

        # if we've already created a node / continuation...

        else :
            next_node = self.head # start of a continuation loop 
            while next_node.next != self.head:   # arrgs are tha above node is precreated on and next one is not same 
                next_node = next_node.next   # moving to next index
            # assigning outside / beacuse it stops exection..
            next_node.next = new_node  # pointing to new node 
            new_node.next = self.head  # pointing to head node.

    def delete(self, index):
        if not self.head :
            return "The list is empty !"
        if index == 0 :
            if self.head.next == self.head :
                self.head = None # removing...
                return   
             # searching the whole list...

            next_node = self.head 
            while next_node.next != self.head :
             next_node = next_node.next 
            self.head = self.head.next # moving forward.
            next_node.next = self.head # changing next index to head node.
            return
        
        next_node = self.head
        for i in range(index - 1):
            if next_node.next == self.head :
              return " Index out of bounds !"
            next_node = next_node.next 
        
        if next_node.next == self.head :
            return "Index not in list !"
        
        next_node.next = next_node.next.next # moving forward x2.
                  

    def display(self):
        if not self.head :
            return "The list is empty :( "
        
        # giving instruction to move to head of list if it exists...
        next_node = self.head

        while True :
            print(next_node.data, end= " -> ")
            
            head_val = self.head.data # storing the head value 

            next_node = next_node.next # moving forward

            # adding break point at reaching back to head node...
            
            if next_node == self.head :

             break

            # printing head a very end...
        print(f'({head_val})')

cll = CircularLinkedList()  
cll.append(20)
cll.append(40)
cll.append(60) 
cll.add(10)
cll.insert(30, 2)
cll.delete(4)
cll.display()         