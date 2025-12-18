// File: 18-12-2025_TwoSum.cpp
// Problem: Two Sum (LeetCode #1)
// Date: 18-12-2025
// Description: Return indices of two numbers in nums that add up to target.
// Brute-force O(n^2) solution with nested loops for easy understanding.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {}; 
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> ans1 = sol.twoSum(nums1, target1);
    cout << "Example 1 Output: [" << ans1[0] << ", " << ans1[1] << "]" << endl;

    // Example 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> ans2 = sol.twoSum(nums2, target2);
    cout << "Example 2 Output: [" << ans2[0] << ", " << ans2[1] << "]" << endl;

    // Example 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> ans3 = sol.twoSum(nums3, target3);
    cout << "Example 3 Output: [" << ans3[0] << ", " << ans3[1] << "]" << endl;

    return 0;
}
