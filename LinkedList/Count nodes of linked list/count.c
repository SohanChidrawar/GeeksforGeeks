//User function Template for C

int getCount(struct Node* head)
{
    int count = 0;
    struct Node *Ptr;
    Ptr = head;
    while(Ptr !=NULL)
    {
        count++;
        Ptr = Ptr->next;
    }
    return count;
    
}
