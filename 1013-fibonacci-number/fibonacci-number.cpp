class Solution {
public:
    int fib(int n) {
        if (n==0 || n==1)
            return n;
        else if(n==2)
            return 1;
        else if(n == 3)
            return 2;
        else
            return fib(n-1) + fib(n-2);
    }
};