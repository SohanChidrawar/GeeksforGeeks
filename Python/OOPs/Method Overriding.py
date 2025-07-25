# Implement the following classes to understand method overriding in Python:

# Class Name: Employee

# Attributes:

# id (integer)
# salary (integer)
# Constructor:

# __init__(self, id, salary): Initializes the id and salary attributes with the given values.
# Methods/Functions:

# get_info(self):
# Parameters: None
# Task: Returns a string formatted as: "EmployeeID:{id} Salary:{salary}".
# Class Name: SalesEmployee (Subclass of Employee)

# Attributes:

# Inherited from Employee: id, salary
# New attribute: sales (integer, optional, defaults to 0)
# Constructor:

# __init__(self, id, salary, sales=0): Calls super().__init__(id, salary) to initialize the inherited attributes, and initializes the sales attribute. 
# The sales parameter defaults to 0 if not provided.
# Methods/Functions:

# get_info(self):
# Parameters: None
# Task: Overrides the get_info method to include the sales attribute in the output.
# Return Format: "EmployeeID:{id} Salary:{salary} Sales:{sales}".
# Examples:

# Input: id = 103, salary = 70000, sales = 300
# Output: 
# EmployeeID:103 Salary:70000
# EmployeeID:103 Salary:70000 Sales:300
# `````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

#User function Template for python3
# Implement Employee and SalesEmployee class
class Employee:
    def __init__(self,id,salary):
        self.id = id
        self.salary = salary
        
    def get_info(self):
        return f"EmployeeID:{self.id} Salary:{self.salary}"
        
class SalesEmployee(Employee):
    def __init__(self,id,salary,sales):
        super().__init__(id,salary)
        self.id = id
        self.salary = salary
        self.sales = sales
        
    def get_info(self):
        return f"EmployeeID:{self.id} Salary:{self.salary} Sales:{self.sales}"
