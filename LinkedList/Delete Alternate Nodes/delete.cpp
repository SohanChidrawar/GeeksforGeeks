/*
Delete Alternate Nodes
Given a Singly Linked List of size n, delete all alternate nodes of the list.

Example 1:
Input:
LinkedList: 1->2->3->4->5->6
Output: 1->3->5
Explanation: Deleting alternate nodes results in the linked list with elements 1->3->5.

Example 2:
Input:
LinkedList: 99->59->42->20
Output: 99->42
*/

//------------------------------------------------------------------------------------------
/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
class Solution{
    public:
    void deleteAlt(struct Node *head){
        if(head==NULL || head->next==NULL)
            return;                             // No alternates to delete
            
        Node *prev,*curr;
        prev=head;
        curr=head->next;
        
        while(prev!=NULL && curr!=NULL)
        {   // Remove the current node
            prev->next = curr->next;
            delete curr;
            // Move to the next pair of alternate nodes
            prev=prev->next;   // Move prev to the next node
            
            if(prev!=NULL)
            {
                curr=prev->next;   // Move curr to the next node
            }
        }
        return ;
    }
};
