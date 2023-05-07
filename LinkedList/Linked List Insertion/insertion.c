/*
Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, 
insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list. 
*/ 


//Function to insert a node at the begin of the linked list.
struct Node *insertAtBegining(struct Node *head, int x)
{
    struct Node*temp;
    temp = malloc(sizeof(struct Node));
    temp ->data =x;
    temp-> next = head;
    return temp;
}


//Function to insert a node at the end of the linked list.
struct Node *insertAtEnd(struct Node *head, int x)  
{
    struct Node*Ptr, *temp;
    Ptr = malloc(sizeof(struct Node));
    Ptr->data =x;
    Ptr->next=NULL;
    
    if(head==NULL)
        return Ptr;
        
    Ptr=head;
    while(Ptr->next!=NULL)
        Ptr = Ptr->next;
    Ptr->next = temp;
    return head;
}
