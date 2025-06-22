# Given an integer n,  write a program to print the square wall of size n using a single loop and string multiplication. 

# Examples:

# Input: n = 5
# Output:
# * * * * *
# * * * * *
# * * * * *
# * * * * *
# * * * * *
# Explanation: Its perfect square wall. 

#User function Template for python3
n = int(input())
for i in range(n):
    for j in range(n):
        print("*",end=" ")
    print()
# Your code here
