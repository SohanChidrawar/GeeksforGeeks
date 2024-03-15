/*
Given a singly linked list of N nodes. Find the first node of the loop if the linked list has a loop. If a loop is present return the node data of the first node of the loop else return -1.

Example 1:

Input: 1->3->2->4->->5
          |__________|
Output: 3
Explanation:
We can see that there exists a loop 
in the given linked list and the first
node of the loop is 3.
*/
//-----------------------------------------------------------------------------------------------------------------

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        if(head==NULL || head->next==NULL)
            return -1;
            
        Node *slow, *fast;
        slow=fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast = fast->next->next;
            
            //if there exit a loop
            if(slow==fast)
            {
                slow=head;
                
                while(slow!=fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow->data;
            }
        }
        return -1;  //no loop found
    }
};
