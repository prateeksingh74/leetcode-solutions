/*
 * 55 - Jump Game - Medium
 * https://leetcode.com/problems/jump-game/?envType=study-plan-v2&envId=top-interview-150
 */

/*
 * My first solution was incorrect and had some logical issues, while it did pass some test cases. 
 * The final solution involves finding the max reach and is much more simpler.
 * To reach this solution, I had to use the assistance of ChatGPT.
 */

--CORRECT SOLUTION--
bool canJump(int* nums, int numsSize) {
    int maxReach = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            return false; // can't move beyond this point
        }
        if (i + nums[i] > maxReach) {
            maxReach = i + nums[i];
        }
    }
    return true;
}


--INCORRECT SOLUTION--
bool canJump(int* nums, int numsSize) {
    int index = nums[index] - 1;
    if (numsSize == 1) {
        if (nums[0] == 0) {
            return true;
        }
    }
    while (index < numsSize) {
        if (index >= numsSize) {
            break; 
        }
        if (nums[index] == 0) {
            break;
        }
        index += nums[index];
    }

    if (index == numsSize) {
        return true;
    }
    return false;
}


