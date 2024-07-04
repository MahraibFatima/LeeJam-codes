class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();

        map<int, int> countMapp;
        for(int i=0; i<size; ++i){
            countMapp[nums[i]]++;
        }

        vector<int> MajorElement;

        for(const auto& i: countMapp){
            if(i.second > size/3)
                MajorElement.push_back(i.first);
        }

        return MajorElement;

    }
};