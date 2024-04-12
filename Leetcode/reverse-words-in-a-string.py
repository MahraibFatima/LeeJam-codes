class Solution1:
    def reverseWords(self, s: str) -> str:
        s = s[::-1]
        new = s.split()
        new = new[::-1]
        return ' '.join(new)
        

class Solution2:
    def reverse(self, s):
        str = ""
        for i in s:
            str = i + str
        return str

    def reverseWords(self, s: str) -> str:
        txt = s.split()
        s = ""
        for i in txt:
            s += self.reverse(i)
            s += " "
        return s.rstrip()
