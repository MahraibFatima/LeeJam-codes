class Solution:
    def reverseWords(self, s: str) -> str:
        s = s[::-1]
        new = s.split()
        new = new[::-1]
        return ' '.join(new)
        
