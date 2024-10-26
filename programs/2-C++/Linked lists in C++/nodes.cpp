#include <iostream>

     using namespace std;

     // nodes are not built in to c++.
       // we have to store them in class.

       class node{
        // now I'll make public members of node 
         public:
           // these are public members
             int data;
              // making a pointer to point towards next node
               // its data type will be node
             node * next; // next stores the cordinates of next node
          // making a constructor
          node (int value){
            data=value; // giving value into data.
          // in nex feild we'll send null
         next=NULL;  
          }  
       }; // declaration is supposed to be here.

     // now to demonstrate the addition to head node / first node.
        void insertatHead(node* &head , int value){
            // initating node n
             node*n = new node(value);
               // now pointing n of next to head.
                 n->next=head; // storing the address of first block of linked list.
          head=n; // moved head to n as , now n is 1st node.
         // now displying it on output.
        }
     /*
     1- now suppose we have a linked list of 1 and 2 blocks   
     2- then we'll satrt triversing from 1 till next = NUlll
     3- we'll make a tail on 2 and indicate 3 's next =NULL
     */

     void insertatTail ( node* &head , int value ) {
      // in case of no blocks of linked list.
       // making a new node n  :
          node* n  = new node(value); // then node n will give value to data feild
       if(head==NULL){
        head=n; // then n will be equal to first node.
        return;
       }
           // now we are required to triverse ,  to the last node of linked list , we are required to make an iterator.
            node* temp=head; // used for iterator
             
              while (temp->next!=NULL){  // gave condition to iterate until next of temp = NUL
              temp=temp->next; // we'll repeat this until temp = temp-> next 
            } // found end of 2nd node
          // we'll add new node n 
         temp->next=n; // assigned 3rd node after 2nd.   
     }
     
     // to print all above we'll make a new function.
      
     void display(node *head){
        node* temp=head;
       while (temp!=NULL){
        // printing data stored in  temp
           cout <<temp->data<<" -> ";
          temp = temp->next;
       } 
       cout << "Null " << endl;
     }

     // making boolean type node searcher.

     bool search( node* head , int key){
        // int key is to ask keynode to be found.
           node* temp=head;
              // now triversing the nodes untill key is found.
           while (temp!=NULL){
             if(temp->data==key){
               // if the data of temp is equal to key.
                return true; // true if key is found.
            }
            temp=temp->next; // to change nodes after every loop.
        }    
        return false; // false if key is not found 
     }

    int main()
    {
      // now making head
        node* head=NULL; // tells that our linked list is empty
         
         // now calling the above functions.

         insertatTail(head,1); // the 1 = int value of node 1
         insertatTail(head,2); // the 2 = int value of node 2
         insertatTail(head,3); // the 3  = int value of node 3 / the node to be added.

         display(head);

         insertatHead(head,4); // the 4 = int value of node 4 / the node attatched to node 1.
 
         display(head); 

         cout<<search(head,4)<<endl; // if after the head the number is equal to node = 1 , if not it'll be = 0
        
        return 0;
    }