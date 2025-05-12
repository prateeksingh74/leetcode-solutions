/*
 * 001 - Merge Sorted Array - Easy
 * https://leetcode.com/problems/merge-sorted-array/
 */

/*
 * This solution works by comparing the largest elements in both arrays from the end. It
 * places the largest one at the end of nums1, nums1[k], and moves the pointer backward.
 * It continues until either array has finished. It also makes sure to copy over all the
 * remaining elements from num2. This solution has time complexity O(m + n).
 */

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i -= 1;
        }
        else {
            nums1[k] = nums2[j];
            j -= 1;
        }
        k -= 1;
    }

    while (j >= 0) {
      nums1[k--] = nums2[j--];
    }
}
