#include <vector>

class Solution {
public:
    int findKthPositive(std::vector<int>& arr, int k) {
        int missingCount = 0, currentNum = 1, arrIndex = 0;
        int size = arr.size();
        
        while (missingCount < k) {

            if (arrIndex <size && arr[arrIndex] == currentNum)   arrIndex++;

            else    missingCount++;
            
            if (missingCount == k)  return currentNum;
            
            currentNum++;
        }
        
        return currentNum;
    }
};
