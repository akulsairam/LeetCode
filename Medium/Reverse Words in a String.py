class Solution(object):
    def reverseWords(self, s):
        s=s.strip()
        s = s.split()
        s=s[::-1]
        print(s)
        s=' '.join(s)
        return s
