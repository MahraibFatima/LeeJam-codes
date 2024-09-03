class Solution {
// Similar logic to Binary Subarrays With Sum
private:
    int helper(vector<int>& nums, int k) {
        int r = 0, l = 0, cnt = 0, oddCount = 0;

        while (r < nums.size()) {
            oddCount += nums[r++] % 2;

            while (oddCount > k && l < r)
                oddCount -= nums[l++] % 2;
            cnt += r - l;
        }
        return cnt;
    }

public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k - 1);
    }
};