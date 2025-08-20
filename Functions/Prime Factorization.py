'''
Given a number n find the prime factorization of the number.
Note: Print the prime factors in non-decreasing order.

Examples:

Input: n = 100
Output: 2 2 5 5
Explanation: 100 = 2 * 2 * 5 * 5
Input: n = 27
Output: 3 3 3
Explanation: 27 = 3 * 3 * 3 

Constraint:
2 <= n <= 200
'''

class Solution:
    def is_Prime(self,x):
        for j in range(2,x):
            if x%j==0:
                return False
        return True
    
    def printPrimeFactorization(self, n):
        #code here
        for i in range(2,n+1):
            if self.is_Prime(i):
                while(n%i==0):
                    print(i,end=' ')
                    n //= i

        
