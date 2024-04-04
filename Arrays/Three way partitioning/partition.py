def threeWayPartition(self, array, a, b):
	    n=len(array)
	    start=0
	    end=n-1
	    i=0
	    
	    #partition around a
	    while i<=end:
	        if(array[i]<a):
	            array[start],array[i] = array[i],array[start]
	            start+=1
	            i+=1
	            
	        elif array[i]>b:
	            array[end],array[i] = array[i],array[end]
	            end-=1
	        else:
	            i+=1
	            
	    return -1
