/*
Given a singly linked list, your task is to remove every kth node from the linked list. 

Example 1:

Input:
linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 
k = 2
Output: 1 -> 3 -> 5 -> 7
Explanation: After removing each 2nd node of the linked list  1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8  .
The resultant linked list will be: 1 -> 3 -> 5 -> 7
*/

//------------------------------------------------------------------------------------------------------------------------
/*
To remove every kth node from a singly linked list, you can use the following approach:

Traverse the linked list and keep track of the previous node.
When you encounter the kth node, skip it by updating the next pointer of the previous node to point to the next node of the kth node.
Continue traversing until the end of the list.
*/
//------------------------------------------------------------------------------------------------------------------------


Node* deleteK(Node *head,int k)
    {
        if(head==NULL || k<0)
            return head;
            
        Node *curr=head;
        Node *prev=NULL;
        int count=0;
        
        while(curr!=NULL)
        {
            count++;
            
            //check if current node is at kth position or not
            if(count%k==0)
            {
                //Remove kth node
                if(prev!=NULL)
                {
                    prev->next = curr->next;
                    delete curr;
                    curr=prev->next;
                }
                else
                {
                    //If previous node is NULL, then head node is kth node
                    //skip the head node
                    Node *temp=curr;
                    head = curr->next;
                    delete temp;
                    curr = head;
                }
            }
            else
            {
                //if current node is not kth node, move to next node
                prev=curr;
                curr=curr->next;
            }
        }
    return head;
    }
