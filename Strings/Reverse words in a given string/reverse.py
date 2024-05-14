class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
         
        #return ".".join(S.split('.')[::-1])
        new = S.split('.')
        return '.'.join(new[::-1])
