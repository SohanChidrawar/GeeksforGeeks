# You are given a list arr that contains integers. You need to count distinct integers in list.

# Examples:

# Input: arr = [4, 4, 5, 4, 3, 8, 4, 2, 4, 8, 1, 7]
# Output: 7
# Explanation: The distinct list would be [4, 5, 3, 8, 2, 1, 7]. The length is 7.
# Input: arr = [2, 3, 4, 5, 1, 2, 14, 6, 8, 7, 5]
# Output: 9
# Explanation: The distinct list would be [2, 3, 4, 5, 1, 14, 6, 8, 7]. The length is 9.

class Solution:
    def countDistinct(self, arr):
        #code here 
        count=1
        for i in range(1,len(arr)):
            if arr[i] not in arr[0:i]:
                count += 1
        return count
