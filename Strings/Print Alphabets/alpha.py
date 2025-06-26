#User function Template for python3

def alphabets(c1,c2):
    
    #Code below to print alphabets from c1 to c2
    # Don't provide a new line after printing
    i = int(ord(c1))
    j = int(ord(c2))
    for x in range(i,j+1):
        n = chr(x)
        print(n,end=" ")
