def findMagicalNumber(self, N : int, arr : List[int]) -> int:
        # code here
        
        #as array is sorted and distict we can use binary search algorithm 
        left=0
        right=N-1
        
        while left<=right:
            mid = (left+right) //2
            
            if arr[mid]==mid:
                # If arr[mid] is a magical number, check if it's the leftmost one
                while(mid>0 and arr[mid-1] == mid-1):
                    mid-=1
                # Found the leftmost magical number
                return mid
                
            elif(arr[mid]<mid):
                left = mid+1
            else:
                right=mid-1
        return -1
