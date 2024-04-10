class Solution:

	def checkTriplet(self,arr, n):
    	# code here
    	squared_arr = [x*x for x in arr]
    	
    	#sort the arr
    	squared_arr.sort()
    	
    	#Iterate through arr
    	
    	for i in range(n-1,1,-1):
    	    left = 0
    	    right = i-1
    	    
            while left < right:
                # Check if there is a triplet satisfying the condition
                if(squared_arr[left] + squared_arr[right] == squared_arr[i]):
                    return True
                
                elif(squared_arr[left] + squared_arr[right] < squared_arr[i]):
                    left+=1
                    
                else:
                    right -= 1
                    
        #No triplet found
        return False
