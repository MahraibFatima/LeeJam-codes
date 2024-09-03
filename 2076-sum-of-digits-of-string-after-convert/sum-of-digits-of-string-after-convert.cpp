class Solution {
    int sumOfDigits(string num_str) {
        int sum = 0;
        for (char digit : num_str) {
            sum += digit - '0';
        }
        return sum;
    }

public:
    int getLucky(string s, int k) {
        string num_str;

        for (char c : s) {
            int value = c - 'a' + 1;
            num_str += to_string(value);
        }

        for (int i = 0; i < k; ++i) {
            int sum = sumOfDigits(num_str);
            num_str = to_string(sum);
        }

        return stoi(num_str);
    }
};