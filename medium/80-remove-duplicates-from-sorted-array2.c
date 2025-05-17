/*
 * 80 - Remove Duplicates From Sorted Array 2 - Medium
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150
 */

/*
 * The array is sorted and so duplicates are adjacent. We want at most two copies of each number.
 * To do this we have a pointer k for the next position to write a valid value. If the current
 * number nums[i] is not equal to nums[k-2], it means that it is a new number or its the second occurrence
 * which is allowed. So we copy that nums[i] number to nums[k] and increment k. This operates in O(n) time complexity. 
 */

int removeDuplicates(int* nums, int numsSize) {

    if (numsSize <= 2) {
        return numsSize;
    }

    int k = 2;

    for (int i = 2; i < numsSize; i++) {
        if (nums[i] != nums[k - 2]) {
            nums[k] = nums [i];
            k++;
        }
    }

    return k;
}
