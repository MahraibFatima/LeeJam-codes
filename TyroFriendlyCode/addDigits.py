class Solution:
    def addDigits(self, num):
        while num>9:
            sum=0
            while num!=0:
                remainder=num%10
                sum+=remainder
                num//=10
            num=sum
        return num
