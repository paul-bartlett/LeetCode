/**
 * Given an array nums and a value val, remove all instances of that value in-place and return the new length.
 * Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 * The order of elements can be changed. It doesn't matter what you leave beyond the new length.
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int count = 0;
        for(int i = 0; i < len; ++i) {
            // Advance array if it's not the value to remove
            if(nums[i] != val) {
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};