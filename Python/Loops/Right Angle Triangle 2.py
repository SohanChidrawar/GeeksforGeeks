# Given an integer n. Write a program to print the Right angle triangle. The length of the perpendicular and base is n.  

# Examples :

# Input: n = 9
# Output:
# *
# * *
# *   *
# *     *
# *       *
# *         *
# *           *
# *             *
# * * * * * * * * * 
# Explanation: Length of perpendicular and base of triangle is 9.


class Solution:
    def printPattern(self, n):
        #Code here
        for row in range(1,n+1):
            for col in range(1,row+1):
                if(row==1 or row==n or col==1 or col==row):
                    print("*",end=" ")
                else:
                    print(" ",end=" ")
            print()
