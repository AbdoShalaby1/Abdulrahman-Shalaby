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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode *curr = head->next;
        ListNode *prv = head;
        ListNode *tmp;
        while (curr != nullptr)
        {
            tmp = curr->next;
            curr->next = prv;
            prv = curr;
            curr = tmp;
        }
        head->next = nullptr;
        return prv;
    }
};