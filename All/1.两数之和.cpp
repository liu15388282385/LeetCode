/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <map>
#include <vector>
// @lc code=start
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> hashtable;
        std::vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end())
            {
                res.push_back(it->second);
                res.push_back(i);
            }
            hashtable[nums[i]] = i;
        }
        return res;
    }
};
// @lc code=end

