class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,prefixSum=0, cnt=0, n=nums.size();
        map<int, int> mpp;
        mpp[0] = 1;
        for(int i=0; i<n; i++){
            prefixSum += nums[i];

            int r = prefixSum - k;
            cnt += mpp[r];

            mpp[prefixSum]++;
        }
        return cnt;
    }
};