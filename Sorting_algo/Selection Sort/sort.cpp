class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i,j,min_index;
        
        for(i=0;i<n-1;i++)
        {
            min_index = i;
            for(j=i+1;j<n;j++)
            {
                if(arr[j] < arr[min_index])
                    min_index = j;
            }
            
            if(min_index!=i)
            {
                int temp = arr[i];
                arr[i] = arr[min_index];
                arr[min_index] = temp;
            }
        }
    }
};
