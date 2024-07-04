class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode *tmp = head;
        while(tmp->next != NULL)
        {
            if(tmp->val == tmp->next->val)
            {
                tmp->next = tmp->next->next;
            }
            if(tmp->next == NULL) break;
            if(tmp->val != tmp->next->val)
            {
                tmp = tmp->next;
            }
        }
        return head;
    }
};