class Solution:
    
    #Function to check if brackets are balanced or not.
    def ispar(self,x):
        # Initialize an empty stack to store opening brackets
        stack = []
        
        bracket = {'(':')','[':']','{':'}'}
        
        # Iterate through the expression string
        for char in x:
            #if current char is opening bracket push into stack
            if char in bracket.keys():
                stack.append(char)
                
            #If current char is closing char
            elif char in bracket.values():
                #If stack is empty
                if not stack: 
                    return False
                    
                #Pop top most element from the stack
                top=stack.pop()
                
                 # If the closing bracket does not match the corresponding opening bracket, return False
                if bracket[top] !=char:
                    return False
        # If the stack is empty after iterating through the expression string, return True (balanced)            
        return len(stack) == 0
