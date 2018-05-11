/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Loop through list comparing each set of numbers once
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                int sum = nums[i] + nums[j];
                // Return indices if matched
                if(sum == target) {
                    vector<int> solution = {i, j};
                    return solution;
                }
            }
        }
    }
};