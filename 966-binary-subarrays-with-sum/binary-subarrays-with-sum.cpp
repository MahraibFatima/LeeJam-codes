class Solution {

private:
    // int numSubarraysWithSum(vector<int>& nums, int goal) {
    //     int l = 0, r = 0, sum = 0, cnt = 0;

    //     while (r < nums.size()) {
    //         sum += nums[r];

    //         while (sum > goal && l <= r)
    //             sum -= nums[l++];
    //         cnt += r - l + 1;// Count this subarray if it matches the goal
    //         r++;
    //     }
    //     return cnt;
    // }
    int helper(vector<int>& nums, int goal) {
        if (goal < 0)
            return 0;
        int l = 0, r = 0, sum = 0, cnt = 0;

        while (r < nums.size()) {
            sum += nums[r++];
            while (sum > goal && l < r)
                sum -= nums[l++];

            //if (sum == goal)
            cnt += r - l ;

        }
        return cnt;
    }

public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums, goal) - helper(nums, goal-1);
    }
};