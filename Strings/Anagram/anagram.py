class Solution:
    
    #Function is to check whether two strings are anagram of each other or not.
    def isAnagram(self,a,b):
        #code here
        A = ''.join(sorted(a))
        B = ''.join(sorted(b))
        
        if A==B:
            return True
        return False
