class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        if (matrix.empty())
            return;

        int rows = matrix.size();
        int cols = matrix[0].size();

        bool firstRowZero = false;
        bool firstColZero = false;

        // Determine if the first row needs to be zero
        for (int j = 0; j < cols; ++j) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Determine if the first column needs to be zero
        for (int i = 0; i < rows; ++i) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Use the first row and column to mark zero rows and columns
        for (int i = 1; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Zero out cells based on the marks in the first row and column
        for (int i = 1; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero out the first row if needed
        if (firstRowZero) {
            for (int j = 0; j < cols; ++j) {
                matrix[0][j] = 0;
            }
        }

        // Zero out the first column if needed
        if (firstColZero) {
            for (int i = 0; i < rows; ++i) {
                matrix[i][0] = 0;
            }
        }
    }
};