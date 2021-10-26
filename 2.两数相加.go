/*
 * @lc app=leetcode.cn id=2 lang=golang
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	var head, tail *ListNode
	carry_val := 0
	for l1 != nil || l2 != nil{
		l1_val, l2_val := 0, 0

		if l1 != nil {
			l1_val = l1.Val
			l1 = l1.Next
		}
		if l2 != nil {
			l2_val = l2.Val
			l2 = l2.Next
		}

		sum := l1_val + l2_val + carry_val
		sum, carry_val = sum%10, sum/10

		if head == nil {
			head = &ListNode{Val: sum}
			tail = head
		} else {
			tail.Next = &ListNode{Val: sum}
			tail = tail.Next
		}
	}

	if carry_val != 0 {
		tail.Next = &ListNode{Val: carry_val}
		tail = tail.Next
	}
	return head
}
// @lc code=end

