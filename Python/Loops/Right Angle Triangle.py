# Given an integer n. Write a program to print the Right angle triangle wall. The length of perpendicular and base is n.  Use single loop and string multiplication.

# Note: Print exactly single " " after "*". Print a new line after printing the triangle.

# Examples:

# Input: n = 4
# Output:
# * 
# * * 
# * * * 
# * * * * 
# Explanation: Length of perpendicular and base of triangle is 4 .

#User function Template for python3
n = int(input())
for i in range(n):
    for j in range(i+1):
        print("*",end=" ")
    print()
# Your code here
