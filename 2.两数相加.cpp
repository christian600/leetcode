/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }

        int carry_value = 0;
        ListNode* tail = nullptr;
        ListNode* head = nullptr;
        while (l1 || l2)
        {
            int l1_val = (l1 == NULL) ? 0 : l1->val;
            int l2_val = (l2 == NULL) ? 0 : l2->val;

            int val = l1_val + l2_val + carry_value;
            carry_value = val / 10;
            
            if (head)
            {
                tail->next = new ListNode(val % 10);
                tail = tail->next;
            }
            else
            {
                head = new ListNode(val % 10);
                tail = head;
            }
            if (l1)
            l1 = l1->next;
            if (l2)
            l2 = l2->next;
        }

        if (carry_value != 0)
        {
            tail->next = new ListNode(carry_value);
            tail = tail->next;
        }

        return head;
    }
};
// @lc code=end

