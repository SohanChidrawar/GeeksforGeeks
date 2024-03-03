/*
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.
Example: LinkList1 = 3->6->9->common
LinkList2 = 10->common
common = 15->30->NULL
Output: 15
*/

int intersectPoint(Node* head1, Node* head2)
{
    int diff;
    int c1=0, c2=0;
    Node *ptr1=head1, *ptr2=head2;
    
    while(ptr1!=NULL)
    {
        c1++;
        ptr1 = ptr1->next;
    }
    while(ptr2!=NULL)
    {
        c2++;
        ptr2 = ptr2->next;
    }
    
    ptr1=head1;
    ptr2=head2;
    diff = abs(c1-c2);
    
    if(c1>c2)
    {
        for(int i=0;i<diff;i++)
            ptr1=ptr1->next;
    }
    else
    {
        for(int i=0;i<diff;i++)
            ptr2=ptr2->next;
    }
    
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
