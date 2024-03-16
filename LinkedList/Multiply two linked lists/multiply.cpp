/*
Given elements as nodes of the two linked lists. The task is to multiply these two linked lists, say L1 and L2. 

Note: The output could be large take modulo 109+7.

Example:

Input:
2
2
3 2
1
2
3
1 0 0
2
1 0 
Output:
64
1000

Explanation:
Testcase 1: 32*2 = 64.
Testcase 2: 100*10 = 1000.
*/
//----------------------------------------------------------------------------------------------------------------------

/* Linked list node structure
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};*/

long long  multiplyTwoLists (Node* l1, Node* l2)
{
  long long mod=1000000007;
  long long sum1=0;
  long long sum2=0;
  Node* curr1=l1;
  Node* curr2=l2;
  
  //calculate sum of first list
  while(curr1){
     sum1=(sum1*10)%mod+curr1->data%mod;
     curr1=curr1->next;
  }
  
  //calculate sum of second list
  
  while(curr2){
      sum2=(sum2*10)%mod+curr2->data%mod;
      curr2=curr2->next;
  }
  
  long long ans=(sum1*sum2)%mod;
   
   return ans;

}
