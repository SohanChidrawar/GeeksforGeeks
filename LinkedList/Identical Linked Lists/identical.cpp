/*
Given two Singly Linked List of N and M nodes respectively. The task is to check whether two linked lists are identical or not. 
Two Linked Lists are identical when they have same data and with same arrangement too.
Examples:
Input:
LinkedList1: 1->2->3->4->5->6
LinkedList2: 99->59->42->20
Output: Not identical
*/

/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
    while(head1!=NULL && head2!=NULL)
    {
        // If data of current nodes is not equal, lists are not identical
        if(head1->data != head2->data)
            return false;
        head1=head1->next;
        head2=head2->next;
    }
    // If both lists reach end at the same time, they are identical
    // Otherwise, one list has extra nodes, so they are not identical
    return (head1==NULL && head2==NULL);
}
