# Given two numbers a and b. The task is to find out their LCM.

# Examples:

# Input: a = 5, b = 10
# Output: 10
# Explanation: LCM of 5 and 10 is 10
# Input: a = 14, b = 8
# Output: 56
# Explanation: LCM of 14 and 8 is 56
# Constraints:
# 1  <=  a , b  <=  10^3

# #User function Template for python3
# Method 1
import math

a = int(input())
b = int(input())

result = math.gcd(a,b)
lcm = (a*b)//result
print(lcm)

# # Your code here
# Method 2
a = int(input())
b = int(input())

least = max(a,b)
while True:
    if a%least==0 and b%least==0:
        break
    least += max(a,b)
print(least)
