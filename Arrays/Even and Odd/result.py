def reArrange(self, arr, N):
        # Separate even and odd numbers
        even=[]
        odd=[]
        
        for i in range(N):
            if(arr[i]%2==0):
                even.append(arr[i])
            else:
                odd.append(arr[i])
                
        result=[]
        i=0
        j=0
        
        #alternate between even and odd number
        while(i<len(even) and j<len(odd)):
            result.append(even[i])
            i+=1
            result.append(odd[j])
            j+=1
        
         # Add remaining even and odd numbers to the result array
        result.extend(even[1:N])
        result.extend(odd[1:N])
        
        arr[:]=result[:]
