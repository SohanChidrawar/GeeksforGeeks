class Solution:
    #Complete the below function
    def search(self,arr, N, X):
        if X in arr:
            return arr.index(X)
        return -1
