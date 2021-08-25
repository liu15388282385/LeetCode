/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <vector>
#include <string>
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int> hashtable;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                result.push_back(it->second);
                result.push_back(i);
                break;
            }
            hashtable[nums[i]] = i;
        }
        return result;
    }
};
// @lc code=end

