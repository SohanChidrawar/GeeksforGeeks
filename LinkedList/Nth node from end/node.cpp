/*
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.
Example:
Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end is 8. 
*/


class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        int count,i;
        count=0;
        struct Node *temp=head;
        //temp=head;

        // Count the number of nodes
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        // Check if n is greater than the number of nodes
        if(count<n)
            return -1;
        //reset temp to head
        temp=head;
        // Move temp to the Nth node from the end
        for(i=1;i<count-n+1;i++)
        {
            temp=temp->next;
        }
        return temp->data;
        
    }
};
