class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        if ch not in word:
            return word
        else:
            start, end =0, word.find(ch)
            wordList = list(word)
            while(end > start):
                wordList[start], wordList[end] = wordList[end], wordList[start]
                start += 1
                end -= 1
                
            word = ''.join(wordList)
            return word
