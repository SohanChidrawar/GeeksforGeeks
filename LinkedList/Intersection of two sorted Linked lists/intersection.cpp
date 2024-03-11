/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        Node *head = nullptr, *tail = nullptr; // Head and tail pointers for the intersection list

    while (head1 != nullptr && head2 != nullptr) 
    {
        if (head1->data == head2->data) 
        {
            // Create a new node for the intersection list
            Node* newNode = new Node(head1->data);
            if (head == nullptr) {
                head = tail = newNode;
            } 
            else 
            {
                tail->next = newNode;
                tail = newNode;
            }
            // Move to the next nodes in both lists
            head1 = head1->next;
            head2 = head2->next;
        } 
        else if (head1->data < head2->data) 
        {
            // Move to the next node in the first list
            head1 = head1->next;
        } 
        else 
        {
            // Move to the next node in the second list
            head2 = head2->next;
        }
    }

    return head; // Return the head of the new linked list representing the intersection
}

    
};
