class Solution {
public:
    int reverse(int x) {
        long long reversed = 0; // Use long long to avoid integer overflow
        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        // Check for overflow
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }
        return reversed;
    }
/*int negative(int n){
    string s = to_string(n);
    s = "-" + s;
    n = stoi(s);
    return n;
}
int reverse(int x) {
    int temp = x;
    long int n = 0;
    bool neg = false;
    if(x<0){
        neg = true;
        x = abs(x);
    }
    while(x>0){
            n = (n*10)+(x%10);
            x /= 10;
        }
    if(neg){
        n = negative(n);    
    }
    return n;
    }*/
};