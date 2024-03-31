class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        vector<int> result;
        
        int max=arr[n-1];
        
        //rightmost element is always reader
        result.push_back(max);
        
        for(int i=n-2;i>=0;--i)
        {
            // If the current element is greater than or equal to the maximum value encountered so far,
            // it is a leader. Update the maximum value encountered so far.
            if(arr[i]>=max)
            {
                result.push_back(arr[i]);
                max=arr[i];
            }
        }
        
        // Reverse the result vector to maintain the order of leaders from left to right
        reverse(result.begin(),result.end());
        return result;
        
    }
};
