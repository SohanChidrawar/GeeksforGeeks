class Solution:
	def isPalindrome(self, S):
		# code here
		str = S[::-1]
		if(str==S):
		    return 1
		return 0
