#User function Template for python3

def reverseString(s):
    #Write your code below to reverse s and return it
    n = len(s)
    rev = ""
    for i in s:
        rev = i+rev
        
    return rev
