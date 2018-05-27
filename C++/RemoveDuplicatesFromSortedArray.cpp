/**
 * Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
 * Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int unique = 0;
        if(len == 0) {
            return len;
        }
        for(int i = 0; i < len - 1; ++i) {
            // Ignore duplicates
            if(nums[i] != nums[i+1]) {
                nums[unique++] = nums[i];
            }
        }
        nums[unique++] = nums[len-1]; // Last number never duped
        return unique;
    }
};