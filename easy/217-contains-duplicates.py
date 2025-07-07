/*
 * 217 - Contains Duplicates - Easy
 * https://leetcode.com/problems/contains-duplicate/
 */

/*
 * Uses a set to determine if there are any duplicates in a list of nums.
 */

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hashset = set()
        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)
        return False


