#include <bits/stdc++.h>
class Solution {
public:
    int findMaxK(vector<int>& nums) {
    int max_k = -1;
    unordered_set<int> num_set(nums.begin(), nums.end());
    
    for (int num : nums) {
        if (num_set.find(-num) != num_set.end()) {
            max_k = max(max_k, abs(num));
        }
    }
    
    return max_k != -1 ? max_k : -1;
}
};