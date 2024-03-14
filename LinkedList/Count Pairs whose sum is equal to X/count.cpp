/*
Given two linked list head1 and head2 with distinct elements, determine the count of all distinct pairs from both lists whose sum is equal to the given value x.
Note: A valid pair would be in the form (x, y) where x is from first linked list and y is from second linked list.
Example 1:

Input:
head1 = 1->2->3->4->5->6
head2 = 11->12->13
x = 15
Output: 3
Explanation: There are total 3 pairs whose sum is 15 : (4,11) , (3,12) and (2,13)
*/

class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        int count = 0;
        struct Node*temp=head1;
        while(temp!=NULL)
        {
            //traverse second linkedlist for each node of first linked list
            struct Node *front=head2;
            while(front!=NULL)
            {
                if(temp->data + front->data == x)
                {
                    count++;
                }
                front = front->next;
            }
            temp = temp->next;
        }
        return count;
    }
};
