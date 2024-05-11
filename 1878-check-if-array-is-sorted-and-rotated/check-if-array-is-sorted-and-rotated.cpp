class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0, n=nums.size();
        for(int i=0; i<n-1; i++) { 
            if(nums[i]>nums[i+1]) 
                c++; 
        }
        return (c==0 || (c==1 && nums[0]>=nums[n-1]));
    }
};