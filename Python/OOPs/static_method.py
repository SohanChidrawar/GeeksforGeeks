# Design a class as described below:

# Class Name: Addition
# Method:
# Function Name: add
# Parameters: a (int), b (int)
# Return Type: int
# Static: Yes (Use the @staticmethod decorator)
# Task: Returns the sum of the values given as parameters.
# Examples:

# Input: a = 3, b = 4
# Output: 7
# ```````````````````````````````````````````````````````````````````

#User function Template for python3
# Implement Addition class here
class Addition:
    def __init__(self,a,b):
        self.a = a
        self.b = b
        
    @staticmethod
    def add(a,b):
        a = int(a)
        b = int(b)
        return a+b
