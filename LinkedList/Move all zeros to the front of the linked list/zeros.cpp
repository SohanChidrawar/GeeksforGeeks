/*
Given a linked list, the task is to move all 0s to the front of the linked list. The order of all another element except 0 should be same after rearrangement.

Example 1:

Input:  0 -> 4 -> 0 -> 5 -> 0
Output: 0 -> 0 -> 0 -> 4 -> 5
Explanation: After moving all 0s of the given
list to the front, the list is:
0 -> 0 -> 0 -> 4 -> 5
*/
//-----------------------------------------------------------------------------------------------------------------------------
/*
To move all the 0s to the front of the linked list while preserving the order of other elements, you can follow these steps:

Traverse the linked list and count the number of 0s.
Create a new linked list with the same elements but with 0s at the front.
Update the original linked list with the elements from the new linked list.
*/
//-----------------------------------------------------------------------------------------------------------------------------

//User function Template for C++
/* Linked List Node structure
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
// Move Zeros to the front of the list
void moveZeroes(struct Node **head)
{
    if(*head==NULL || (*head)->next==NULL)
        return; // No need to rearrange if the list has 0 or 1 node
    
    int count = 0;
    struct Node *temp = *head;
    while(temp!=NULL)
    {
        if(temp->data == 0)
            count++;
        temp=temp->next;
    }
    
    //create new linkedlist with zero at front
    Node *newhead=NULL;
    Node *newtail=NULL;
    
    for(int i=0;i<count;i++)
    {
        Node *newNode = new Node(0);
        if(newhead==NULL)
            newhead=newtail=newNode;
        else
        {
            newtail->next = newNode;
            newtail = newNode;
        }
    }
    
    //Append rest of the element in linkedlist
    
    temp=*head;
    while(temp!=NULL)
    {
        if(temp->data!=0)
        {
            Node *newNode = new Node(temp->data);
            if(newhead==NULL)
            newhead=newtail=newNode;
            else
            {
                newtail->next = newNode;
                newtail = newNode;
            }
        }
        temp = temp->next;
    }
    
    // Update the original linked list with the elements from the new linked list
    temp = *head;
    Node* prev = nullptr;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    *head = newhead;    
}
