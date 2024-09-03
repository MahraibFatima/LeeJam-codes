class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long ChalkSum = 0; 

        for(auto i: chalk)
            ChalkSum += i;

        k %= ChalkSum;

        for(int i=0; i < chalk.size(); ++i){
            if(k < chalk[i])
                return i;
            k -= chalk[i];
        }
        return 0;
    }
};