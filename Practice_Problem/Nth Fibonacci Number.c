int nthFibonacci(int n) {
    // code here
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    int i;
    for(i=2;i<=n;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    
    return fib[n];
    
}
