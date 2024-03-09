/*
Given a linked list of size n, your task is to complete the function isLengthEvenOrOdd() which contains the head of the linked list and check whether the length of the linked list is even or odd.

Example1:
Input:
n = 3
linked list = 9->4->3
Output:
Odd
Explanation:
The length of linked list is 3 which is odd.
*/
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*structure of a node of the linked list is as
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

// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
    int count=0;
    struct Node *Ptr=head;
    while(Ptr!=NULL)
    {
        count++;
        Ptr=Ptr->next;
    }
    if(count%2==0)
        return 0;
    else
        return 1;
}
