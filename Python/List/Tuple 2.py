# You are given a tuple numbers that contains a A.P sequence integer. You need to calculate the next three sequences of numbers and return the whole 
# sequence in a tuple.

# Examples:

# Input: tup = ( 1, 5, 9, 13, 17)
# Output: 1 5 9 13 17 21 25 29
# Explanation: It's an increasing sequence by 4. So, the next three numbers are 17+4= 21,  21+4=25, 25+4=29.
# Input: arr = (3, 1 , -1, -3, -5 , -7)
# Output: 3  1  -1  -3  -5  -7  -9  -11  -13
# Explanation:  It's an decreasing sequence by 2.  So, the next three numbers are  -7-2=-9, -9-2=11, -11-2=-13

def sequence(tup):
    # code here 
    diff = tup[1] - tup[0]
    list1 = []
    num = tup[-1]
    for _ in range(3):
        num += diff
        list1.append(num)
    return tup + tuple(list1)
