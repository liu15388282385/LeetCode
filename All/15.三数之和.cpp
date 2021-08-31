/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        int len = nums.size();
        if (len < 3)
            return {};                  // 排除长度小于3的情况
        vector<vector<int> > res;
        sort(nums.begin(), nums.end()); // 先进行升序排序
        for (int i = 0; i < len; ++i) {
            if (nums[i] > 0)    return res; // 由于递增，第一个数都大于0，则没有可能情况
            if (i > 0 && nums[i] == nums[i - 1]) continue; // 去重
            int left = i + 1, right = len - 1; // 两头相中靠拢
            while (left < right) {
                if (nums[i] + nums[left] + nums[right] == 0) {
                    res.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    // 继续去重
                    left++;right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
                else if (nums[i] + nums[left] + nums[right] > 0)    
                    right--;
                else    
                    left++;
            }
        }
        return res;
    }
};
// @lc code=end

