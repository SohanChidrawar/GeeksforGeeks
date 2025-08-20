'''
Given a number n, find the first digit of the number.

Examples:

Input: n = 123
Output: 1
Input: n = 976
Output: 9

Constraints:
1 <= n <= 109
'''

def firstDigit(n):
    #code here
    while(n>=10):
        n = n//10
    return n
