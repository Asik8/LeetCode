class Solution {
public:
    void Print(ListNode* head) {
        ListNode* tmp = head;
        while (tmp != NULL) {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }

    int Count(ListNode* head) {
        ListNode* tmp = head;
        int c = 0;
        while (tmp != NULL) {
            c++;
            tmp = tmp->next;
        }
        return c;
    }

    ListNode* removeNthFromEnd(ListNode*& head, int n) {
        int c = Count(head);
        c -= n;
        if (c == 0) {
            ListNode* d = head;
            head = head->next;
            delete d;
            return head;
        }
        ListNode* tmp = head;
        for (int i = 1; i < c; i++)
            tmp = tmp->next;
        ListNode* d = tmp->next;
        tmp->next = tmp->next->next;
        delete d;
        return head;
    }
};