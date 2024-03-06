/*
Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Example 1:
Input:
N = 3
value[] = {1,2,1}
Output: 1
Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.
*/
// ----------------------------------------------------------------------------------------------------------------------------

/*struct Node {

  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // Check if the linked list is empty or has only one node
        if (head == nullptr || head->next == nullptr)
            return true;
            
        Node *slow=head;
        //create or declare a stack
        stack<int> s;
        
         // Push all elements of the list to the stack
        while(slow!=NULL)
        {
            s.push(slow->data);
            slow=slow->next;
        }
        
        slow=head;
        // Iterate in the list again and check by popping from the stack
        while(slow!=NULL)
        {
            // Get the top most element
            int i = s.top();
            //pop the element
            s.pop();
            // Check if data is not same as popped element
            if(slow->data!=i)
                return false;
            slow=slow->next;
        }        
        return true;
    }
};
