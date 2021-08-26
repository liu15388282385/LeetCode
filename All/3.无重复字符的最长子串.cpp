/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

#include <iostream>
#include <unordered_set>
using namespace std;
// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, rk = 0;
        int n = s.size();
        unordered_set<char> occ; // 无序集合，记录每个字符是否出现过
        for (int i = 0; i < n; ++i) {
            if (i > 0) 
                // i右移一格之前，移除这个字符
                occ.erase(s[i - 1]);
            while (rk < n && !occ.count(s[rk])) {
                // 如果没有遇到重复的，不断右移rk
                occ.insert(s[rk]);
                ++rk;
            }
            // 遇到重复后，记录当前值rk - i 并与res比较，取大者
            res = max(res, rk - i);
        }
        return res;
    }
};
// @lc code=end

