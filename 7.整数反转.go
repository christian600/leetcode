/*
 * @lc app=leetcode.cn id=7 lang=golang
 *
 * [7] 整数反转
 */

// @lc code=start
func reverse(x int) int {
	result := 0
	for x != 0 {
		if result > math.MaxInt32 / 10 || result < math.MinInt32 / 10 {
			return 0
		}

		result  = result * 10 + x % 10
		x /= 10
	}
	return result
}
// @lc code=end

