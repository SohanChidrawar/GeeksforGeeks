void threeWayPartition(vector<int>& array,int a, int b)
    {
        int n = array.size();
        int start=0;
        int end=n-1;
        int i=0;
        
        while(i<=end)
        {
            if(array[i]<a)
            {
                swap(array[start],array[i]);
                start++;
                i++;
            }
            
            else if(array[i]>b)
            {
                swap(array[end],array[i]);
                end--;
            }
            else
                i++;
        }
        //return -1;
    }
