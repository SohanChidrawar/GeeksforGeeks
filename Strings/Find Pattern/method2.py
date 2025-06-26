text = input("Enter the string: ")
pattern = input("Enter the pattern to find:")
pos = text.find(pattern)

while(pos>=0):
    print(pos,end="")
    pos = text.find(pattern,pos+1)


# Example: 
# text = AAAAA
# pattern = AAA

# output: 0 1 2
