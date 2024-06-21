class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> hash(3,0);
        int n=nums.size();

        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }

        int count = 0;
        int index1 = 0;
        while(count<hash[0]){
            nums[index1]=0;
            index1++;
            count++;
        }
        count=0;
        while(count<hash[1]){
            nums[index1]=1;
            index1++;
            count++;
        }
        count=0;
        while(count<hash[2]){
            nums[index1]=2;
            index1++;
            count++;
        }
    }
};