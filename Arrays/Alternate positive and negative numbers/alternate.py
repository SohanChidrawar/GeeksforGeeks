class Solution:
    def rearrange(self,arr, n):
        # code here
        # Separate positive and negative numbers
        positive =[]
        negative=[]
        
        for i in range(n):
            if(arr[i]>=0):
                positive.append(arr[i])
            else:
                negative.append(arr[i])
        
        result=[]
        i=0
        j=0
        
        # Alternate between positive and negative numbers
        while(i<len(positive) and j<len(negative)):
            result.append(positive[i])
            i+=1
            result.append(negative[j])
            j+=1
        # Add remaining positive and negative numbers to the result array
        result.extend(positive[i:n])
        result.extend(negative[j:n])
         # Update the original array with the rearranged elements
        arr[:] = result[:]
        
        return result
