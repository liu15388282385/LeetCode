/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <map>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hashtable;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end())
            {
                res.push_back(it->second);
                res.push_back(i);
                break;
            }
            hashtable[nums[i]] = i;
        }
        return res;
    }
};
// @lc code=end

