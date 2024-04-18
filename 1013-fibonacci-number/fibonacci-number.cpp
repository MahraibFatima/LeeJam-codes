class Solution {
public:
    int cal_fib(int n) {
        if (n==0 || n==1)
            return n;
        else if(n==2)
            return 1;
        else if(n == 3)
            return 2;
        else
            return cal_fib(n-1) + cal_fib(n-2);
    }
    int fib(int n) {
        int res = 0;
        int arr[n+1];
        for (int i = 0; i < n+1; ++i) {
            arr[i] = -1;
        }
        for(int i=0; i<=n; ++i){
        if(arr[i] !=-1){
            res = arr[i];
        }else{
            res = cal_fib(i);
            arr[i] = res;
        }            
        
        }
        return res;
    }
};