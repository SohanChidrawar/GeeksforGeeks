/*
You are given a singly linked list and pointer which is pointing to the node which is needs to be deleted. No information about the head pointer or any other node is
provided. Your task is to remove the given node from the linked list.

Note: You are not given a reference to the head. Additionally, multiple nodes can have the same values as the target node, but you must only remove the node whose
pointer is given to you.

Example 1:

Input:
n = 2
Linked List = 1 -> 2
Value of the given Node = 1
Output: 2
Explanation: 
After deleting 1 from the linked list, 
we have remaining nodes as 2.
*/
//----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       del->data = del->next->data;
       del->next = del->next->next;
    }

};
