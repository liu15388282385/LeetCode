/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
#include <string>
#include <unordered_set>
using namespace std;
// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, rk = 0;
        unordered_set<char> occ; 
        int n = s.size(); // 字符串长度
        
        for (int i = 0; i < n; i++) {
            if (i > 0) 
                occ.erase(s[i - 1]);// 出现重复后，i右移并移除当前首字母
            while (rk < n && !occ.count(s[rk])) {
                occ.insert(s[rk]);  // 记录未重复的新字母
                rk++;               // 未遇见重复字母，rk不断右移
            }
            res = max(res, rk - i); // 记录res为本身和当前不重复子串长度的较大值
        }

        return res;
    }
};
// @lc code=end

