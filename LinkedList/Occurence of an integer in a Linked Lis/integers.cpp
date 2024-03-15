/*
Given a singly linked list and a key, count the number of occurrences of the given key in the linked list.

Example 1:

Input:
n = 7
Link List = 1->2->1->2->1->3->1
key = 1
Output: 4
Explanation: 1 appears 4 times. 
*/

//----------------------------------------------------------------------------------------------------
/*
To count the number of occurrences of a given key in a singly linked list, you can traverse the list and check each node's data value against the key. Increment 
a counter every time you find a match.
*/
//----------------------------------------------------------------------------------------------------

/*
  Node is defined as 
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/

class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
        // if(head==NULL || head->next==NULL)
        //     return NULL;
        
        int count = 0;
        struct node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data == search_for)
                count++;
            temp=temp->next;
        }
        return count;
    }
};
