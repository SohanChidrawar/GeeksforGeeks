/*
Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

Input:
LinkedList: 1->2->3->4->5
Output: 5
Explanation: Count of nodes in the 
linked list is 5, which is its length.
*/



//User function Template for C

int getCount(struct Node* head)
{
    int count = 0;
    struct Node *Ptr;
    Ptr = head;
    while(Ptr !=NULL)
    {
        count++;
        Ptr = Ptr->next;
    }
    return count;
    
}
