class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        int i=0;
        while(i<n-1)
        {
            swap(arr[i],arr[i+1]);
            i=i+2;
        }
    }
};
