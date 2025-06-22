# Given an integer n. Write a program to print the inverted "Right angle triangle" wall. The length of the perpendicular and base is n.

# Note: Use string multiplication for python.

# Examples:

# Input: n = 4
# Output:
# * * * * 
# * * * 
# * * 
# *
# Explanation: Length of perpendicular and base of triangle is 4 .


class Solution:
    def printPattern(self, n):
        #Code here
        for i in range(n):
            for j in range(n-i):
                print("*",end=" ")
            print()
