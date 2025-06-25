# You are given a string s of even length. Each character of string s is followed by a digit(0-9).
# You need to increment the characters by the digit values and return the new string of characters.
# Examples:
# Input: s "y2b2"
# Output: ad
# Explanation: y is incremented 2 times. 1st time y becomes z, second time z becomes a. Similarly, b is incremented 2 times to get d. So, ad is the output.
# Input: s "k0a4"
# Output: ke
# Explanation: k is incremented 0 times, so k remains k only, a is incremented 4 times so a becomes a->b->c->d->e. So, ke is the output

# ``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

#User function Template for python3

#Complete the function
#s is the argument
#Return the manipulated string
def manipulateIt(s):
    #Your code below
    n = len(s)
    result = ''
    
    for i in range(0,n,2):
        char = s[i]
        digit = int(s[i+1])
        
        for _ in range(digit):
            char = chr(ord(char)+1)
            if char >'z':
                char = 'a'
        
        result += char  
        
    return result
        
        
