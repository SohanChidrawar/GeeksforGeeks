# Design a class as described below.

# class: User
# instance variable: name(String)
# constructor: parameter: none, task: initialize the instance variable to "Default"

# Note: The driver's code will print instance variable (name) of your designed class.

# Example:

# Input: None
# Output: Default
# ````````````````````````````````````````````````````````````````````````````````````````````````````````````
#User function Template for python3

# Driver code will print instance variable like this
# user = User()
# print(user.name)

class User:
    def __init__(self):
        self.name = 'Default'
