
# creating class node...

class Node :

    def __init__(self, data) :
        self.data =  data
        self.next = None  # pointing to next node
        self.previous = None  # pointing to previous node

# Creating a doubly linked list class...

class DoublyLinkedList : 

    def __init__(self) :
        self.head = None # theres no node in list a start

    def add(self, data) :
        new_Node = Node(data)
        new_Node.next = self.head
        if not self.head :
            self.head.previous = new_Node  # linkng to the first index
        self.head = new_Node       # creating the added node as head

    # creating method for insertion...

    def insert(self, data, index) :
        new_Node = Node(data)
        if index == 0 :
            new_Node.next = self.head # checking at head of list
            if self.head :
                self.head.previous = new_Node # linking to first index
            self.head = new_Node  # assigning to 1st index
            return
        
        # method for searching boundaries for given index
        
        start = self.head
        for i in range(index - 1) : # arg are same as len(arr) , yet for list
            if not start :
                return "Given index is not bound to list"
            start = start.next # for moving to next node

        if not start :
            return "Given index not found in list"
        
        new_Node.next = start.next # linking to next node
        new_Node.previous = start # linking to previous node

        if start.next :
            start.next.previous = new_Node # linking to previous node / updating the pointer to new node
            start.next = new_Node  # linking next's pointer to new node



    def append(self, data) :
        new_Node = Node(data)

    # creating method to create new node

        if not self.head :
         self.head = new_Node
         return        
    
        # if there are pre existant node then finding them

        last = self.head  # finding first node
        while last.next :
            last = last.next # moving to next node

        last.next = new_Node  # to assign newly created node / pointer 1

        new_Node.previous = last # assigning the previous node / pointer 2

    # method for deletion of a node.

    def delete(self, index) :
        
        # checking if any elements exist

        if not self.head :
            return "There are no elements to delete"
        
        # checking if its the first node

        if  index == 0 :
            self.head = self.head.next # moving to next if not found
            if self.head :
                self.head.previous = None # if node found then breaking link
                return

        # checking if specific node exists

        start = self.head # starting at head of 1st node
        for i in range(index):
            if not start :
                return "Given node does not exist"
            start = start.next

        if not start :
            return "Non existant node"

        # if previous node is to be deleted 

        if start.previous :
            start.previous.next = start.next # breaking the link

        # if next node is to be deleted 

        if start.next.previous :
            start.next.previous = start.previous # breaking the link    



    
    def display(self) :
        start = self.head # to start at the head of 1st node
        
        while start :
            print(start.data, end = " <-> ")
            start = start.next  # moving to next created node
        print("None")

dll = DoublyLinkedList() # calling the doubly linked list / here ( = ) is essential to create the list
dll.append(20)
dll.append(40)
dll.append(60)
dll.add(10)
dll.insert(30, 2)
dll.delete(0)
dll.display()            