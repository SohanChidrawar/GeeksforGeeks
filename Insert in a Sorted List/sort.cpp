/*
Given a linked list sorted in ascending order and an integer called data, insert data in the linked list such that the list remains sorted.

Example 1:

Input:
LinkedList: 25->36->47->58->69->80
data: 19
Output: 
19 25 36 47 58 69 80
Explanation:
After inserting 19 the sorted linked list will look like the one in the output.
*/
//----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        //create a new node with given data
        Node* newNode = new Node(data);
        
        // If the linked list is empty or the new node's data is less than the head's data
        if(head==NULL || data < head->data)
        {
            newNode->next=head;
            return newNode;
        }
            
        struct Node *temp;
        temp=head;
         // Traverse the linked list to find the appropriate position to insert the new node
        while(temp->next!=NULL && temp->next->data < data)
        {
            temp=temp->next;
        }
        
        // Inserting the new node at the appropriate position
        newNode->next = temp->next;
        temp->next = newNode;
        
        return head;
    }
};

