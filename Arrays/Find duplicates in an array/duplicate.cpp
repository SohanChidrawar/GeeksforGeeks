vector<int> duplicates(long long arr[], int n) 
    {
        // Initialize a vector to store the frequency of each element
        vector<int>freq(n,0);
        // Count the frequency of each element in the input array
        for(int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        // Initialize a set to store the indices of elements occurring more than once
        set<int> s;
        // Iterate through the frequency vector to find elements occurring more than once
        for(int i=0;i<n;i++)
        {
            if(freq[i]>1)
                s.insert(i);
        }
        
        // If no duplicate elements are found, insert -1 into the set
        if(s.empty())
            s.insert(-1);
        
        // Convert the set to a vector and return it
        vector<int> res(s.begin(),s.end());
        return res;
    }
