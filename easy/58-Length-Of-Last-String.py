class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        strings = s.strip().split(" ")

        if strings == None:
            return 0
        
        return len(strings[-1])
