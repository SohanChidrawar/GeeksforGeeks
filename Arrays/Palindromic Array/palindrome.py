def is_palindrome(num):
    return str(num)==str(num)[::-1]
    
def PalinArray(arr ,n):
    # Code here
    for num in arr:
        if not is_palindrome(num):
            return 0
    return 1

