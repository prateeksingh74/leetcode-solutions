# 49. Group Anagrams - Medium
# https://leetcode.com/problems/group-anagrams/

from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs):
        hashmap = defaultdict(list)
        for word in strs:
            key = ''.join(sorted(word))
            hashmap[key].append(word)
        return list(hashmap.values())
