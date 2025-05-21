/*
 * 45 - Jump Game 2 - Medium
 * https://leetcode.com/problems/jump-game-ii/?envType=study-plan-v2&envId=top-interview-150
 */

/*
 * This solution calculates the minimum number of jumps needed to reach the end of an array, 
 * where each element represents the maximum jump length from that position. It uses a greedy
 * approach to track the farthest reachable index in the current jump range, and increments 
 * the jump count whenever it reaches the end of that range. 
 */


int jump(int* nums, int numsSize) {
    int count = 0;
    int currEnd = 0;
    int farthest = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        if (i + nums[i] > farthest) {
            farthest = i + nums[i];
        }

        if (i == currEnd) {
            count++;
            currEnd = farthest;
        }
    }
    return count;
}


