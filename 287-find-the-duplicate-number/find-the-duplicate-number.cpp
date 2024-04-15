class Solution {
public:
    /*int binarySearch(vector<int>& nums){
        int left = 1, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = 0;
            for (int num : nums) {
                if (num <= mid) {
                    count++;
                }
            }
            (count > mid) 
                ? right = mid 
                : left = mid + 1;
            }
            return left;
        }
    int findDuplicate(vector<int>& nums) {
        int dup = binarySearch(nums);
        return dup;
    }*/
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0], fast=nums[0];

        while(true){
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast){
                break;
            }
        }   
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};