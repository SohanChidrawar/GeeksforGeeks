class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        int count=0 ;
        unordered_map<int,bool> mp ;
        while(head1)
        {
            mp[head1->data] = true ;
            head1 = head1->next ;
        }
        
        while(head2)
        {
            if(mp[x-(head2->data)]==true)
                count++ ;
            head2 = head2->next ;
        }
        return count ;
    }
};
