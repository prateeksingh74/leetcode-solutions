/*
 * 1 - Two Sum - Easy
 * https://leetcode.com/problems/two-sum/description/
 */

/*
 * Creates a hashmap to keep track of the complements of numbers to find the target. 
 * Checks the hashmap to see if the num adds up with a complement to make the target. 
 */


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashmap:
                return [hashmap[complement], i]
            hashmap[num] = i

