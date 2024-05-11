class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size(), count=0,max_count=0;
        for(int i=0; i<n; ++i){

            (nums[i]==1) ? count++ : count=0; // ternary op

            if(count>= max_count)
                max_count = count;
        }
        return max_count;
    }
};