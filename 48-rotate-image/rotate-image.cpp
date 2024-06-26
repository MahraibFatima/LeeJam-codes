class Solution {
private:
void transpose(vector<vector<int>>& matrix){
    int rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void swap_columns(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) { // Only swap half of the columns
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols - 1 - j];
            matrix[i][cols - 1 - j] = temp;
        }
    }
}

public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        swap_columns(matrix);
    }
};