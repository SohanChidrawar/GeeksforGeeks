/*
Given a singly linked list and an integer x.Delete xth node from the singly linked list.
Example:
Input: 1 -> 3 -> 4 
       x = 3
Output: 1 -> 3
Explanation:
After deleting the node at 3rd
position (1-base indexing), the
linked list is as 1 -> 3. 
*/

/* Link list Node 
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

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //if LL is empty
    if(head==NULL)
        return head;
    //If 1st node need to be deleted
    if(x==1)
    {
        Node *ptr=head;
        head=head->next;
        delete ptr;
        return head;
    }
    // Traverse till x-1 node to delete xth node
    Node *prev=NULL;
    Node *ptr=head;
    for(int i=1; ptr!=NULL && i<x; ++i)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    // If x is greater than the length of the list
    if(ptr==NULL)
        return head;
        
    //Delete xth node
    prev->next=ptr->next;
    delete ptr;
    
    return head;
}
