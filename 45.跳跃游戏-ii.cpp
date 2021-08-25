/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start

#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int step = 0, end = 0, maxpos = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (maxpos >= i)
            {
                maxpos = max(maxpos, nums[i] + i);
                if (i == end)
                {
                    end = maxpos;
                    ++step;
                }
            }
        }
        return step;
    }
};
// @lc code=end

