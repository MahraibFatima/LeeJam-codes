class Solution:
    def romanToInt(self, s: str) -> int:
        Roman = {'I': 1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000} 
        num = 0

        for i, j in zip(s, s[1:]):
            if Roman[i] < Roman[j]:
                num -= Roman[i]
            else:
                num += Roman[i]
        
        return num + Roman[s[-1]]
