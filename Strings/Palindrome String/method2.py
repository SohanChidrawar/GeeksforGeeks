#User function Template for python3
def isPalindrome(s):
    # Your code below
    # Remeber to ignore the case when comparing
    n = len(s)
    s = s.lower()
    i=0
    j=n-1
    while(i<=j):
        if(s[i]!=s[j]):
            return False
        i = i+1
        j = j-1
    return True
