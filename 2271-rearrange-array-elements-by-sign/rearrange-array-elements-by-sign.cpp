class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> positive;
        queue<int> negative;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] < 0)
                negative.push(nums[i]);
            else
                positive.push(nums[i]);
        }
        for(int i=0; i<nums.size(); ++i){
            if(i%2 == 0){
                nums[i] = positive.front();
                positive.pop();
            }
            else{
                nums[i] = negative.front();
                negative.pop();
            }
        }
        return nums;
    }
};