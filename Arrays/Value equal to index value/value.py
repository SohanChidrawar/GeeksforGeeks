def valueEqualToIndex(self,arr, n):
		# code here
        result=[]
        i=1
        while i<=n:
            if(i==arr[i-1]):
                result.append(i)
            i+=1
                
        return result
