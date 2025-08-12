# Given an integer n. Write a program to find the nth Fibonacci number.

# F(0)= 0, F(1)=1
# The nth Fibonacci number is given by the forumla F(n) = F(n-1) + F(n-2). The first few fibonacci numbers are: 0 1 1 2 3 5. . . . 

# Examples:

# Input: n = 4
# Output: 3
# Explanation: In the series 0 1 1 2 3 5...... the fourth fibonacci number is 3.
# Input: n = 5
# Output: 5
# Explanation: In the series 0 1 1 2 3 5 8...... the fifth fibonacci number is 5.

#User function Template for python3
#Back-end complete function Template for Python 3
n = int(input())

########### Write your code below ###############
if n==0:
    print(0)
elif n==1:
    print(1)
else:
    # print(0,1,end=" ")
    a = 0
    b = 1
    for i in range(1,n):
        fib = a+b
        # print(fib)
        a = b
        b = fib
    print(fib)
