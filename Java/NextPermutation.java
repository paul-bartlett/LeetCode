/**
 * Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
 * If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).
 * The replacement must be in-place and use only constant extra memory.
 */
class Solution {
    public void nextPermutation(int[] nums) {
        int len = nums.length - 1;
        int i = 0;
        int j = 0;
        int tmp;
        // Find longest non-increasing suffix
        while(i < len && nums[len-i] <= nums[len-i-1]) {
            i++;
        }
        // Skips sucessor and just reverses sequence if highest permutation
        if(i != len) {
            // Find rightmost sucessor
            while(nums[len-j] <= nums[len-i-1]) {
                j++;
            }
            // Swap with pivot
            tmp = nums[len-i-1];
            nums[len-i-1] = nums[len-j];
            nums[len-j] = tmp;
        }
        // Reverse suffix
        for (j = 0; j < (i+1)/2; j++) {
            tmp = nums[len-j];
            nums[len-j] = nums[len-i+j];
            nums[len-i+j] = tmp;
        }
    }
}