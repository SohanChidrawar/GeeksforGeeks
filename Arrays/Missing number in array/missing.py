class Solution:
    def missingNumber(self,array,n):
        array.sort()
        for i in range(n-1):
            if(array[i]!=i+1):
                return i+1
        return n
