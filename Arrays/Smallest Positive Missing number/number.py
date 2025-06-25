# You are given an integer array numbers[], you need to find the smallest positive missing number.
# Examples:
# Input: numbers = [1.2.3.4]
# Output: 5
# Explanation: 5 is the smallest positive missing number.
# Input: numbers [6.5.3.1]
# Output: 2
# Explanation: 2 is the smallest positive missing number
# ``````````````````````````````````````````````````````````````````````````````````````````````````````

#User function Template for python3

#Complete this function
#numbers is the list argument
#Return the smallest +ve missing number
def missingPositiveNumber(numbers):
    #Write your code below
    n = len(numbers)
    
    #segregrate positive number from other
    j = 0
    for i in range(n):
        if numbers[i]<=0:
            numbers[i],numbers[j] = numbers[j],numbers[i]
            j += 1
            
    #marks presence of positive number with index position
    positive = numbers[j:]
    m = len(positive)
    
    for i in range(m):
        x = abs(positive[i])
        if x-1<m and positive[x-1]>0:
            positive[x-1]*=-1
    
    #find first index with positive value
    for i in range(m):
        if positive[i]>0:
            return i+1
            
    return m+1
    
    
    
    
