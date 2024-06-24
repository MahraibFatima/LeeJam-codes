class Solution {
private: 
    bool isPrime(int n){
        if(n<=1)
            return false;
        if(n==2 || n==3)
            return true;
        for(int i=2; i<=sqrt(n); ++i){
            if(n%i == 0)
                return false;
        }
        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxPrime= INT_MIN;
        int size = nums.size();

        for(int i=0; i<size; ++i){

            if(isPrime(nums[i][i])){
                if(maxPrime < nums[i][i])
                    maxPrime = nums[i][i];
            }
            if(isPrime(nums[i][size-i-1])){
                    if(maxPrime < nums[i][size-i-1])
                        maxPrime = nums[i][size-i-1];
            }
        }
        if(maxPrime == INT_MIN)
            return 0;
        return maxPrime;
    }
};