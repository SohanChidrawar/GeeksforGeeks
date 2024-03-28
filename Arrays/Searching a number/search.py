from typing import List


class Solution:
    def search(self, n : int, k : int, arr : List[int]) -> int:
        # code here
        i=0
        for i in range(n):
            if(arr[i]==k):
                return i+1
                
        return -1
