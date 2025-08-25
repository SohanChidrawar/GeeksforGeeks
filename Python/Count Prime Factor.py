'''
you are given a number n, you want to return a total number of prime factor of n. Example n=10, factor of 10 are 1,2,5,10 out of this 2,5 
are prime no output should be 2 python code
'''

def is_prime(x):
    if x < 2:
        return False
    for i in range(2, int(x**0.5) + 1):
        if x % i == 0:
            return False
    return True

def count_prime_factors(n):
    count = 0
    for i in range(1, n + 1):
        if n % i == 0 and is_prime(i):
            count += 1
    return count

# Example
print(count_prime_factors(10))  # Output: 2 (prime factors are 2 and 5)
