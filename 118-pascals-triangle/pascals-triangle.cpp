class Solution {
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1); // inserting the 1st element

        // calculate the rest of the elements:
        for (int col = 1; col < row; col++) {
            ans *= (row - col);
            ans /= col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> PascalTriangle;
        for (int i = 1; i <= numRows; ++i) {
            PascalTriangle.push_back(generateRow(i));
        }
        return PascalTriangle;
    }
};