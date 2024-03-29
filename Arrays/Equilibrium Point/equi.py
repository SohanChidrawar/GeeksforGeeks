def equilibriumPoint(self,A, N):
        # Your code here
        total = sum(A)
        
        left_sum = 0
        for i in range(len(A)):
            total -=A[i]
             # Check if the left sum equals the remaining sum (total_sum)
            if left_sum==total:
                # Return the equilibrium point 
                return i+1
            # Add the current element to the left sum
            left_sum +=A[i]
            
        return -1
