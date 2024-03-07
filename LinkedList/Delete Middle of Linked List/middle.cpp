/*
Given a singly linked list, delete middle of the linked list. For example, if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.
If there are even nodes, then there would be two middle nodes, we need to delete the second middle element. For example, if given linked list is 1->2->3->4->5->6 
then it should be modified to 1->2->3->5->6.
If the input linked list has 1 node, then it should return NULL

Input:
LinkedList: 1->2->3->4->5
Output: 1 2 4 5

Input:
LinkedList: 2->4->6->7->5->1
Output: 2 4 6 5 1
*/
// ----------------------------------------------------------------------------------------------------------------------

// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        if(head==NULL || head->next == NULL)
            return NULL;
            
        Node* prev=NULL;
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        prev->next = slow->next;
        delete slow;
        
        return head;
    }
};
