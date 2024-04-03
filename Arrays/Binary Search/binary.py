def binarysearch(self, arr, n, k):
		# code here
		low=0
		high=n-1
		
		while(low<=high):
		    mid = (low+high)//2
		    # If element is found at mid, return mid
		    if(arr[mid]==k):
		        return mid
		       
		    # If element is smaller than mid, search left half
		    elif(arr[mid]>k):
		        high=mid-1
		    # If element is greater than mid, search right half
		    else:
		        low=mid+1
		        
		# If element is not found, return -1
		return -1
