class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int max = INT_MIN, min = INT_MAX; 
        int size = prices.size(), profit = 0;


        for (int i = 0; i < size; ++i) {
            if (min > prices[i])    
                min = prices[i];

            max = prices[i] - min;
            if(profit < max)     
                profit = max;
        }
        return profit;
    }
};