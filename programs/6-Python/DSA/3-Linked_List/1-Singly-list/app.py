 
#   creating a node class...

class Node :
    def __init__(self, data):
        self.data = data
        self.next =  None  # because we'v no other node in code , yet program with calls this one creates new ones.

# creating a linked list class , which manges the nodes...

class linked_list :
    
    # defining the head of first node ...
    def __init__(self) :
         self.head = None

    def append(self, data):
         
        fresh_node = Node(data)
        if not self.head :
            self.head = fresh_node
            return
        
        current_node = self.head
       
        # creating loop for upcoming nodes till the function calls end the loop will repeat...
        
        while current_node.next :
            
            current_node = current_node.next  # a pointer var to the new node coming afterwards...

        current_node.next = fresh_node   # used to link the new node to list... / please assign outside..

    # defining a function to add a node at the beggining of the list...

    def add(self, data) :
        fresh_node = Node(data)
        fresh_node.next = self.head # adding a first index...
        self.head = fresh_node

    # defining a function to insert a node at a specific index...  

    def insert(self, index, data) :
        fresh_node = Node(data)

        if index == 0 :
            self.add(data)
            return
        current_node = self.head 
        count = 0
        while current_node and count < index - 1 : # condition : if the current node is bound to the boundary of list
            current_node = current_node.next
            count += 1  # incrementing the count...
        if not current_node : # condition : if the node is not in boundaries of list
            print("The list index is not bound to the list...")
            return
        fresh_node.next = current_node.next # pointing to the current node position
        current_node.next = fresh_node # pointing to the fresh node...
    
    #  creating a function to delete a node from the list...

    def delete(self, data) :
        current_node = self.head # delete the first node meeting the requirements...

        # checking if list exists..
        if not current_node :
            print("The list has no elements...")
            return
        
        # checking if the first element is to be deleted..

        if current_node.data == data :
            self.head = current_node.next
            return
        
        # checking if this node is not the one , then moving to next...

        while current_node.next and current_node.next.data != data :
            
            current_node = current_node.next # moving to next node

        # checking the boundaries of the list...

        if not current_node.next :
            print("The given index does not exist in list...")
            return
        
        current_node.next = current_node.next.next # pointing to the next node after the node to be deleted...


    def display(self):

        current_node = self.head # pointing to the created node.

        while current_node :

            print(current_node.data, end = " -> ")

            current_node = current_node.next # to indicate towards next node...

        print("None")

# functiion calls ....

ll = linked_list() # creates an empty linked list...
ll.append(20)
ll.append(40)
ll.append(60)
ll.add(10)
ll.insert(2, 30) # used to insert a node at a specific index..
ll.delete(30)
ll.display() # used to display th whole list..            


