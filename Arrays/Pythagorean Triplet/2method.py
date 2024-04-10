class Solution:

	def checkTriplet(self,arr, n):
    	# code here
    	squared_arr = [x*x for x in arr]
    	
    	#sort the arr
    	squared_arr.sort()

      #Iterate through array
        for i in range(n):
            for j in range(i+1,n):
                # Calculate the sum of squares of the current pair
                sum_of_squares = arr[i] * arr[i] + arr[j] * arr[j]
                # Check if the sum of squares is in the squared set
                if sum_of_squares in squared_arr:
                    return True
                    
        return False
