/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode sumHead(0);
        ListNode * psum = &sumHead;
        int carry = 0;        //进位
        int val1, val2, sum;
        while(l1 || l2 || carry)
        {
            val1 = l1 ? l1->val : 0;
            val2 = l2 ? l2->val : 0;
            sum = val1 + val2 + carry;
            psum->next = new ListNode(sum % 10);
            carry = sum / 10;
            psum = psum->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return sumHead.next;
    }
};
