# Given an integer n, write a program to print the square of size n using "*" character. 

# Examples :

# Input: n = 4
# Output:
# * * * *
# *     *
# *     *
# * * * *




#User function Template for python3
n = int(input())
for row in range(1,n+1):
    for col in range(1,n+1):
        if(row==1 or row==n or col==1  or col==n):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()
# Your code here
