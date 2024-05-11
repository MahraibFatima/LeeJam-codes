#include<bits/stdc++.h>
class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        int n=nums.size(), sum=0, vec_sum=0;
        int max = n+1;

        for(int i=0; i<max; ++i){
            sum += i;
        }

        for(int i=0; i<n; ++i){
            vec_sum += nums[i];
        }
        return sum-vec_sum;
    }
};