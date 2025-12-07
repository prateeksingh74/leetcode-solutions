class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        if not (part in s):
            return s
        
        string = s.replace(part, "", 1)
        return self.removeOccurrences(string, part)

