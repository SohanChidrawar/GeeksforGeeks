def largest( arr, n):
    max=0
    for i in range(n):
        if(arr[i]>max):
            max=arr[i]
    return max
