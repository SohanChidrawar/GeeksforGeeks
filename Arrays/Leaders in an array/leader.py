class Solution:
    #Back-end complete function Template for Python 3
    
    #Function to find the leaders in the array.
    def leaders(self, A, N):
        # Initialize an empty list to store the leaders
        leader = [];
        
        # Initialize a variable to store the maximum element encountered from the right
        max = float('-inf')
        
        # Traverse the array from right to left
        for i in range(N-1,-1,-1):
            # If the current element is greater than or equal to the maximum element 
            # encountered from the right
            if A[i] >=max:
                max=A[i]
                leader.append(A[i])
                
        leader.reverse()
        return leader
