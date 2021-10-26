/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        if (x == 0)
        {
            return true;
        }
        if (x % 10 == 0)
        {
            return false;
        }

        int re_val = 0;
        while (x > re_val)
        {
            re_val = re_val * 10 + x % 10;
            x /= 10;
        }
        return x == re_val || x == re_val / 10;
    }
};
// @lc code=end

