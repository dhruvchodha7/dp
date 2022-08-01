class Solution {
public:
    //normal recursion
    // int fib(int n) {
    //     if(n==0||n==1) return n;
    //     return fib(n-1)+fib(n-2);
    // }
    
    //dp
    int fib(int n) {
        int a[n+1];
        if(n==0) return 0;
        a[0] = 0;
        a[1] = 1;
        for(int i=2; i<=n; i++)
            a[i] = a[i-1]+a[i-2];
        return a[n];
    }
    
};