/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int len = nums1.size() + nums2.size();
        int k = len / 2 ;       // 不管总长度为奇数还是偶数,中位数都在第int(len/2)+1的位置
        int p1 = 0, p2 = 0;     // 分别移动两个数组的指标
        int left = 0, right = 0;// 记录第k-1小和k小的两个数

        for (int i = 0; i <= k; i++) {
            left = right;       // 把上一次的right赋值给left
                // 保证数组1不会越界    //数组2越界时取数组1的值  // 都没没越界时取较小值
            if (p1 < nums1.size() && (p2 >= nums2.size() || nums1[p1] < nums2[p2])) {
                right = nums1[p1++];
            } else {
                right = nums2[p2++]; // 取较小值或者当数组1越界时取数组2的值
            }
        }

        return (len % 2) ? right : (left + right) / 2.0 ; 
    }
};
// @lc code=end

