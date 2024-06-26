class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> numSet(nums.begin(), nums.end());

        int maxCount = 0;

        for (int num : numSet) {
            // Only start counting if num is the beginning of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int curr = num;
                int max = 1;

                while (numSet.find(curr + 1) != numSet.end()) {
                    curr++;
                    max++;
                }

                maxCount = std::max(maxCount, max);
            }
        }

        return maxCount;
    }
};