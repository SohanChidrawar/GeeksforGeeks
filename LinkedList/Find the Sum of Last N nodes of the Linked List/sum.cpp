/*Given a single linked list of size N, calculate the sum of the last M nodes.

Example 1:

Input:
N = 6, M = 3
5 9 6 3 4 10
Output:
17
Explanation:
Sum of last three nodes in the linked list is 3 + 4 + 10 = 17.
*/
//----------------------------------------------------------------------------------------


/*Structure of the node of the linled list is as

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};
*/
// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
    if(head ==NULL || n<0)
        return 0;
        
    struct Node *slow,*fast;
    slow=fast=head;
    int count=0;
    
    //move fast pointer n steps ahead
    while(fast!=NULL && count<n)
    {
        fast=fast->next;
        count++;
    }
    
    //if list contain less then n node
    if(count<n)
        return 0;
        
    //move both pointer till end of linkedlist
    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    
    //now the slow node is at (N-n)th place from last from where
    // we want to take sum of it
    
    int sum=0;
    while(slow!=NULL)
    {
        sum+=slow->data;
        slow=slow->next;
    }
    
    return sum;
}
