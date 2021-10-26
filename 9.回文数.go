/*
 * @lc app=leetcode.cn id=9 lang=golang
 *
 * [9] 回文数
 */

// @lc code=start
func isPalindrome(x int) bool {
	if x < 0 {
		return false
	}

	if x == 0 {
		return true
	}

	if x % 10 == 0 {
		return false;
	}

	re_val := 0
	for x > re_val {
		re_val = re_val * 10 + x % 10
		x /= 10
	}

	return x == re_val || x == re_val / 10
}
// @lc code=end

