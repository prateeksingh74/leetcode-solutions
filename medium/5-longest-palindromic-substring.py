class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s) == 1:
            return s
        
        def expandFromCenter(left: int, right: int):
            while left >= 0 and right <= len(s) - 1 and s[left] == s[right]:
                left -= 1
                right += 1

            return s[left + 1: right]
        
        longest = ""

        for i in range(len(s)):
            p1 = expandFromCenter(i, i + 1)
            p2 = expandFromCenter(i, i)
            if len(p1) > len(longest):
                longest = p1
            if len(p2) > len(longest):
                longest = p2
        
        return longest
