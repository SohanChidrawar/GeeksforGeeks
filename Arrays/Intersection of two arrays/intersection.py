def NumberofElementsInIntersection(self,a, b, n, m):
        #return: expected length of the intersection array.
        #create a set of array A
        setA = set(a)
        
        count = 0
        #iterate to element of array b and search for common element
        for num in b:
            #if the element exist in set A, it common
            if num in setA:
                count+=1
                #remove element from setA to avoid duplicate case
                setA.remove(num)
        
        return count
