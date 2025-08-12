# Given a string s of single space-separated words. Capitalize the first letter of all words and count the number of the words in the string. 
# Print the line and the number in separate lines with new line character at the end.

# Examples:

# Input: s = "welcome to the world of geeks"
# Output: 
# Welcome To The World Of Geeks
# 6
# Input: s = "are you enjoying programming"
# Output:
# Are You Enjoying Programming
# 4 ..

#User function Template for python3
s = input()
letter = s.title()
print(letter)

word = s.split()
count = len(word)
print(count)
