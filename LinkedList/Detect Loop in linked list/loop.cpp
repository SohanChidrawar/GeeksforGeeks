/*
Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.
Example: 
Input:
N = 3
value[] = {1,3,4}
x(position at which tail is connected) = 2
Output: True
Explanation: In above test case N = 3.
The linked list with nodes N = 3 is
given. Then value of x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.
*/

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *slow, *fast;
        slow=fast=head;
        
        if(head==NULL)
            return false;
        // Move slow pointer one step and fast pointer two steps
        // If there's a loop, they'll eventually meet
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            // If slow and fast pointers meet, there's a loop
            if(slow==fast)
                return true;
        }
        return false;
    }
};
