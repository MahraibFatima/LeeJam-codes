class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = INT_MIN, min = INT_MAX, size = prices.size(), profit = 0;
        if(size == 1)   return 0;

        for (int i = 0; i < size; ++i) {
            if (min > prices[i])    min = prices[i];

            max = prices[i] - min;
            if(profit < max)     profit = max;
        }
        //  if(profit > prices[size-1]) 
        //      return 0;
        //  else
            return profit;
    }
};