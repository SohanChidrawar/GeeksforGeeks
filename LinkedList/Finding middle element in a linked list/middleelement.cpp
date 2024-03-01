/*
Probelm Statement: Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.
*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        if(head==NULL)
        {
            return -1;
        }
        int count=0;
        Node *ptr=head;
        //ptr=head;
        while(ptr->next!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        
        ptr = head;
        for(int i=0;i=count/2;i++)
        {
            ptr=ptr->next;
        }
        return ptr->data;
    }
};


//---------------------------OR---------------------------------------------------//

class Solution{
 public:
int getMiddle(Node *head)
    {
        struct Node *slow, *fast;
        slow=head;
        fast=head;
        if(head==NULL)
        {
            return -1;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
};
