class Solution {
public:
    bool isPalindrome(int x) {
       long int temp = x ,n = 0;

        while(temp>0){
            n = (n*10)+(temp%10);
             temp /= 10;
        }
        return (x == n);
    }
};