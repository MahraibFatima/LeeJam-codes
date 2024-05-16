class Solution {
public:
    bool isSubsequence(string s, string t) {
        int temp=0;
        for(int i=0; i<s.length(); ++i){
            int count=0;
            for(int j=temp; j<t.length(); ++j){
                if(s[i] == t[j]){
                    temp = j+1;
                    count = 1;
                    break;
                }
            }
            if(count == 0)
                return false;
        }
        return true;
    }
};