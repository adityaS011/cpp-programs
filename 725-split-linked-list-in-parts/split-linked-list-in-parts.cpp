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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> list(k,nullptr);
        int l=0;
        for(ListNode* node = head; node; node=node->next ) l++;
        int n=l/k;
        int r=l%k;
        ListNode* node = head;
        ListNode* prev = nullptr;
        for (int i = 0; node && i < k; i++, r--) {
            list[i] = node;
            for (int j = 0; j < n + (r > 0); j++) {
                prev = node;
                node = node->next;
            }
            prev->next = nullptr;
        }
        return list;
    }
};