/*
You are given the head of a Linked List. You have to move the last element to the front of the Linked List and return the list.

Example 1:

Input:
N = 5
List = {2,5,6,2,1}
Output:
{1,2,5,6,2}
Explanation:
In the given linked list, the last element is 1,
after moving the last element to the front the
linked list will be {1,2,5,6,2}.
*/
//-------------------------------------------------------------------------------------------------------------------------------------
ListNode *moveToFront(ListNode *head)
    {
        if(head==NULL || head->next==NULL)
            return head;
            
        ListNode *temp,*prev;
        temp=head;
        prev=NULL;
        
        //traverse until temp to second last node
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        
        //move last node to first node;
        prev->next=NULL;
        temp->next=head;
        head=temp;
        
        return head;
    }
