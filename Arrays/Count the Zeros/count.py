class Solution:
    def countZeroes(self, arr, n):
        # code here
        count=0
        for i in range(n):
            if(arr[i]==0):
                count+=1
                
        return count
