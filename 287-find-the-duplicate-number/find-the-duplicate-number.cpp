class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map <int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(const auto& pair : mpp){
            if(pair.second >= 2)
                return pair.first;
        }
        return -1;
    }
};