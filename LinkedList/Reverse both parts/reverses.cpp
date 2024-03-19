/*
Given a linked list and a number k. You have to reverse first part of linked list with k nodes and the second part with n-k nodes.

Example 1:
Input: 1 -> 2 -> 3 -> 4 -> 5
k = 2
Output: 2 -> 1 -> 5 -> 4 -> 3
Explanation: As k = 2 , so the first part 2
nodes: 1 -> 2 and the second part with 3 nodes:
3 -> 4 -> 5. Now after reversing the first part: 
2 -> 1 and the second part: 5 -> 4 -> 3.
So the output is: 2 -> 1 -> 5 -> 4 -> 3
*/


//-----------------------------------------------------------------
/*
The idea is to reverse the whole list and break it at the node-k point.
Return the node-k+1th pointer
*/
//-----------------------------------------------------------------

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/

Node *reverse(Node *head, int k)
    {
        Node* curr=head;
        Node* prev=NULL;
        int count=0;

        while(curr!=NULL)
        {
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        
        //Important thing to note that now the starting of the list has prev as the main pointer 
        //and not the head
        Node* temp=prev;
        int i=count-k-1;
        while(i--){
            temp=temp->next;
        }

        head->next=prev;
        
        //Now connect the last of list to the front
        Node *ans = temp->next;
        temp->next=NULL;
        
        return ans;
    }
};
