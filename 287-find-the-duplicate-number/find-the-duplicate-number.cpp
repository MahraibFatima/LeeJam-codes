// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         map <int, int> mpp;
//         for(int i=0; i<nums.size(); i++){
//             mpp[nums[i]]++;
//         }
//         for(const auto& pair : mpp){
//             if(pair.second >= 2)
//                 return pair.first;
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};