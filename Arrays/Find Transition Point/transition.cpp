class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        //sort(arr.begin(),arr.end());
        int i=0;
        for(i;i<n;i++)
        {
            if(arr[i]==1)
                return i;
        }
        // If 1 is not found in the array
        return -1;
    }
};
