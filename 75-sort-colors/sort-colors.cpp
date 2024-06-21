class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3] = {0}; 
        int size = nums.size();

        for(int i=0; i<size; ++i)//count  occurrences of nums
            count[nums[i]]++;

        for(int i=0; i<count[0]; ++i){
            nums[i] = 0;
        }
        for(int i=count[0]; i<count[0]+count[1]; ++i){
            nums[i] = 1;
        }
        for(int i=count[0]+count[1]; i<count[0]+count[1]+count[2]; ++i){
            nums[i] = 2;
        }

        // for(int i=0; i<size; ++i){
        //     if(i<count[0])
        //         nums[i] = 0;
        //     else if(count[0] < i > count[1])
        //         nums[i] = 1;
        //     else if((count[1] < i >count[2]))
        //         nums[i] = 2;
        // }
    }
};