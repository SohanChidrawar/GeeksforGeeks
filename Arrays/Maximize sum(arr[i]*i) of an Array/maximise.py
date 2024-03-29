class Solution:
    def Maximize(self, a, n):
        
        # Complete the function
        a.sort()
        sum=0
        
        for i in range(n):
            sum = sum+a[i]*i
        return sum%(10**9+7)
