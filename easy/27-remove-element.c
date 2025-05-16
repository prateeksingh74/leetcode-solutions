/*
 * 27 - Remove Element - Easy
 * https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150
 */

/*
 * I have a counter for how many nums do not equal to value and I traverse throught the array and I count them.
 * If the number does not equal to value, I first copy its value to the front of the array and then increment the counter.
 */

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++; 
        }
    }
    return k;
}
