# Set to store elements we have seen so far
        seen = set()
        
        for num in arr:
            # Calculate the complement
            complement = x-num
            
            if complement in seen:
                # Found two elements whose sum is x
                return True
            # Add the current element to the set
            seen.add(num)
        # No such pair found    
        return False
