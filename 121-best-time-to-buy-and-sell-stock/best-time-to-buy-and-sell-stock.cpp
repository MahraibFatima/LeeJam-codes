class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;

        int min = INT_MAX; 
        int size = prices.size(), maxProfit = 0;

        for (int i = 0; i < size; ++i) {
            if (min > prices[i])    
                min = prices[i];

            int max = prices[i] - min;
            if(maxProfit < max)     
                maxProfit = max;
        }

        return maxProfit;
    }
};