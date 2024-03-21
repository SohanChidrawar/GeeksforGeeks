class Solution:
    #Function to check if two arrays are equal or not.
    def check(self,A,B,N):
        A.sort()
        B.sort()
        if(A==B):
            return True
        else:
            return False
