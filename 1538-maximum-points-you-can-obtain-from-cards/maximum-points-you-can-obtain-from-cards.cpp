class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // Right Sum
        int rSum = 0;
        for(int i=0; i<k; ++i){
            rSum += cardPoints[i];
        }

        int r = k-1, l = cardPoints.size() -1;
        int maxCards = rSum, lSum = 0;

        while(r >= 0){
            rSum -= cardPoints[r--];
            lSum += cardPoints[l--];
            maxCards = max(maxCards, rSum + lSum);
        }
        return maxCards;
    }
};