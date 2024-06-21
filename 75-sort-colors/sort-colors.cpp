class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> hash(3,0);
        int n=nums.size();

        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }

        int index1 = 0;
        for(int i=0; i<hash[0]; i++){
            nums[index1++]=0;
        }

        for(int i=0; i<hash[1]; i++){
            nums[index1++]=1;
        }
        for(int i=0; i<hash[2]; i++){
            nums[index1++]=2;
        }
    }
};