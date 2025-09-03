/*
 * 217 - Valid Anagram - Easy
 * https://leetcode.com/problems/valid-anagram/description/
 */

/*
 * Using sorted function in python and comparing the two strings.
 * Hi
 */

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return false;
        return sorted(s) == sorted(t)
