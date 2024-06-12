#include <vector>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(size == 1 || size == k)
        return;
        if(k>size) k%=size;
        vector <int> temp;

        for(int i=0; i<k; ++i){
            temp.push_back(nums[size-i-1]);
        }

        for (int i = size; i>k; i--){
            nums[i-1] = nums[i-k-1];     
        }
        
        int i=k-1;
        for (auto it = temp.begin(); it != temp.end(); ++it) { 
            nums[i--]= *it; 
        }
    }
};