class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        exp_sum = (n * (n + 1)) // 2
        real_sum = 0
        for i in range (0, n):
            real_sum += nums[i]
        return exp_sum - real_sum

