/*
Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.
Example:
Input:
N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.
*/

Node* sortedMerge(Node* head1, Node* head2)  
{  
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
        
    Node *first;
    Node *tail;
    if(head1->data < head2->data)
    {
        first=head1;
        head1=head1->next;
    }
    else
    {
        first=head2;
        head2=head2->next;
    }
    
    tail=first;
    
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data < head2->data)
        {
            tail->next=head1;
            //last=a;
            head1=head1->next;
        }
        else
        {
            tail->next=head2;
            //last=b;
            head2=head2->next;
        }
        tail=tail->next;
    }
    if(head1!=NULL)
        tail->next=head1;
    else
        tail->next=head2;
        
    return first;
}  
