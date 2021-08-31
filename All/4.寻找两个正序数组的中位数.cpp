/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */
#include <vector>
#include <iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), 
            n = nums2.size();
        if (m > n) return findMedianSortedArrays(nums2, nums1);
        int k = (m + n + 1) / 2;
        int l = 0, r = m;
        double res = 0;
        while (l < r) {
            
        }
        return res;
    }
};
// @lc code=end

