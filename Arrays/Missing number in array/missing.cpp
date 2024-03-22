class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        //sort array in ascending order
        sort(array.begin(), array.end());
        
        //checking for missing number
        for(int i=0;i<n-1;i++)
        {
            if(array[i]!=i+1)
                return i+1;
        }
        //no missing element is present
        return n;
    }
};
