/*
Given a linked list of N nodes such that it may contain a loop.
A loop here means that the last node of the link list is connected to the node at position X(1-based index). If the link list does not have any loop, X=0.
Remove the loop from the linked list, if it is present, i.e. unlink the last node which is forming the loop.
Example:
Input:
N = 3
value[] = {1,3,4}
X = 2
Output: 1
Explanation: The link list looks like
1 -> 3 -> 4
     ^    |
     |____|    
A loop is present. If you remove it 
successfully, the answer will be 1.
*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head==NULL || head->next==NULL)
            return;
        
        Node *slow,*fast,*prev;
        slow=fast=head;
        prev=NULL;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            
            // If slow and fast pointers meet, there's a loop
            if(slow==fast)
            {
                if(slow==head)
                {
                    prev->next=NULL;
                    return;
                }
                slow=head;
                while(slow->next != fast->next)
                {
                    slow=slow->next;
                    fast= fast->next;
                }
                // Set the next pointer of the last node of the loop
                fast->next=NULL;
                return ;
            }
        }
    }
};
