/*
Given a linked list of size N. The task is to complete the function countNodesinLoop() that checks whether a given Linked List contains a loop or not and if the 
loop is present then return the count of nodes in a loop or else return 0. C is the position of the node to which the last node is connected. If it is 0 then no 
loop.
Examples:
Input:
N = 10
value[]={25,14,19,33,10,21,39,90,58,45}
C = 4
Output: 7
Explanation: The loop is 45->33. So length of loop is 33->10->21->39->90->58->45 = 7. The number 33 is connected to the last node to form the
loop because according to the input the 4th node from the beginning(1 based index) will be connected to the last node for the loop.
*/

/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    
    Node *slow, *fast;
    slow=fast=head;
    
    if(head==NULL)
        return 0;

  //  Move slow and fast pointers until they meet or fast reaches end of list
    while(fast!=NULL && fast->next!=NULL)
    {
        //count++;
        slow=slow->next;
        fast=fast->next->next;
      // If slow and fast pointers meet, there is a loop
        if(slow==fast)
        {
            int count=1;
            slow=slow->next;
            while(slow!=fast)
            {
                count++;
                slow=slow->next;
            }
            return count;
        }
    }
    //No loo[ found]
    return 0;
}
