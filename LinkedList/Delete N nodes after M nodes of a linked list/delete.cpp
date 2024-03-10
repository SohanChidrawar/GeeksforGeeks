/*
Given a linked list, delete N nodes after skipping M nodes of a linked list until the last of the linked list.

Example:
Input:
2
8
2 1
9 1 3 5 9 4 10 1
6
6 1
1 2 3 4 5 6 

Output: 
9 1 5 9 10 1
1 2 3 4 5 6

Explanation:
Deleting one node after skipping the M nodes each time, we have list as 9-> 1-> 5-> 9-> 10-> 1.
*/

//-------------------------------------------------------------------------------------------------------------------------------------

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        if(head==NULL || M<=0 || N<=0)
            return;
            
        struct Node *curr=head;
        
        while(curr!=NULL)
        {
            //skip M node
            for(int i=1;i<M && curr!=NULL;i++)
                curr=curr->next;
                
            if(curr==NULL)
                return;      //reach at end of Linkedlist
             
            //curr=head;   
            //delete N node
            struct Node *temp=curr->next;
            for (int i=0; i<N && temp!=NULL;i++)
            {
                struct Node *node=temp->next;    // Pointer to the next node to be deleted
                delete temp;
                temp=node;
            }
            // Update the next pointer of the current node
            curr->next=temp;
            // Move to the next node
            curr=temp;
        }
    }
};
