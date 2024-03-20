class Solution:
	def print2largest(self,arr, n):
		max_num = max(arr)
		second=-1
		for index in range(n):
		    if(arr[index]>second and arr[index]<max_num):
		        second = arr[index]
		
		return second

