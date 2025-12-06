class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        min_diff = arr[1] - arr[0]
        for i in range (len(arr) - 1):
            if ((arr[i + 1]) - arr[i]) <= min_diff:
                min_diff = arr[i + 1] - arr[i]
        result = []
        for i in range (len(arr) - 1):
            if ((arr[i + 1] - arr[i]) == min_diff):
                result.append([arr[i], arr[i + 1]])

        return result

# a faster solution
class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        min_diff = arr[1] - arr[0]
        for i in range (len(arr) - 1):
            if ((arr[i + 1]) - arr[i]) <= min_diff:
                min_diff = arr[i + 1] - arr[i]
        result = []
        for i in range (len(arr) - 1):
            if ((arr[i + 1] - arr[i]) == min_diff):
                result.append([arr[i], arr[i + 1]])

        return result
