class Solution {
  public:
    int search(int n, int k, vector<int> &arr) {
        // code here
        int i=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==k)
                return i+1;
        }
        return -1;
        
    }
};
