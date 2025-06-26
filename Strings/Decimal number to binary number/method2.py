def binary(num):
    if num==0:
        return 0
    result = ""
    while(num>0):
        i = num%2
        num = num//2
        result = result+str(i)
    return res

a= binary(15)
print(a)
