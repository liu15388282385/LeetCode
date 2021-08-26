/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

#include <iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x != 0) {
            // 判断整数溢出
            if (res < INT_MIN /10 || res > INT_MAX / 10) {
                return 0;
            }
            // 每次取末尾数字
            int tmp = x % 10;
            res = res * 10 + tmp;
            x /= 10;
        }
        return res;
    }
};
// @lc code=end

