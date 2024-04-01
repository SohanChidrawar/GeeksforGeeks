class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        // code here
         // Initialize variables to track the indices of x and y
        int a=-1;
        int b=-1;
        
        // Initialize the minimum distance to the maximum possible integer value
        int min=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            // If the current element is equal to x, update its index
            if(arr[i]==x)
                a=i;
                
                // If the current element is equal to y, update its index
            if(arr[i]==y)
                b=i;
                
            // If both x and y have been found, calculate their distance
            if(a!=-1 && b!=-1)
            {
                int diff=abs(a-b);
                // If the current distance is smaller than the minimum, update the minimum
                if(diff<min)
                    min=diff;
            }
        }
        //  x or y doesn't exist in the array
        if(min==INT_MAX)
            return -1;
        return min;
    }
};
