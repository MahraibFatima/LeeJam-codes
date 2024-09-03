class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char, int> mpp;
        mpp['a'] = -1;
        mpp['b'] = -1;
        mpp['c'] = -1;

        int cnt = 0;
        for(int i = 0; i < s.length(); ++i){
            mpp[s[i]] = i; // setting idx here

            cnt += 1 + min( mpp['a'], min(mpp['b'], mpp['c']) );
        }
        return cnt;
    }
};