/*
 * 169 - Majority Element - Easy
 * https://leetcode.com/problems/majority-element/?envType=study-plan-v2&envId=top-interview-150
 */

/*
 * I have provided my original solution of time complexity O(n^2) but it does not work for array buffers
 * that are really large and gets a Time Limit Exception. I then coded a solution using the Boyer-Moore algorithm.
 */


#include <math.h>

int majorityElement(int* nums, int numsSize) {

    int majority = (int)floor(numsSize / 2);
    int count = 0;
    for (int i = 0; i < numsSize; i++) {        
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }

            if (count > majority) {
                return nums[i];
            }
        }
    count = 0;
    }
    return nums[0];
}

int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int candidate = 0;

    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

