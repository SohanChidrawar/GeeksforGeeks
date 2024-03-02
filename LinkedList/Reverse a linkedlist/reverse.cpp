/*
Given a linked list of N nodes. The task is to reverse this list.
Example 1:
Input:
LinkedList: 1->2->3->4->5->6
Output: 6 5 4 3 2 1
Explanation: After reversing the list, 
elements are 6->5->4->3->2->1
*/

/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node *curr,*prev,*nex;
        //0 or 1 node do nothing
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        prev=NULL;
        curr=head;
        while(curr!=NULL)
        {
            nex=curr->next;         //save next  node
            curr->next=prev;        //reverse concept
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    
};
