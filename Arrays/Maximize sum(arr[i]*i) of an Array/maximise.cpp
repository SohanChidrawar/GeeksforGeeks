class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        //sorted(a.begin(),a.end());
        // Sort the array in non-decreasing order
        sort(a,a+n);
        long long int sum=0;
         // Iterate through the sorted array and calculate the sum
        for(int i=0;i<n;i++)
        {
            // Multiply the element by its index and add it to sum  
            sum += (long long)a[i]*i;
        }
        // Return the maximum sum modulo 10^9 + 7
        return sum%1000000007;
    }
};
