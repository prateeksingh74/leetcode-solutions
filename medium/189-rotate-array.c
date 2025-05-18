/*
 * 189 - Rotate Array - Medium
 * https://leetcode.com/problems/rotate-array/description/?envType=study-plan-v2&envId=top-interview-150
 */

/*
 * This solution runs in O(n) time and space complexity because it uses a temporary array. We place each value
 * at (i + k) % numsSize index in the temp array. We then copy the temp array into the real array. 
 */

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int temp[numsSize];
    
    for (int i = 0; i < numsSize; i++) {
        int newIndex = (i + k) % numsSize;
        temp[newIndex] = nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
        nums[i] = temp[i];
    }  
}
