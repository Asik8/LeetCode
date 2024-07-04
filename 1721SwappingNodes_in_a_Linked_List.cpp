class Solution {
public:
    void Print(ListNode* head)
    {
        ListNode* tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
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

    ListNode* swapNodes(ListNode* head, int k) {
        int c = Count(head);
        c -= k;
        ListNode * t1 = head;
        ListNode * t2 = head;
        for(int i=1;i<=c;i++) t1 = t1->next;
        for(int i=1;i<k;i++) t2 = t2->next;
        swap(t1->val,t2->val);
        return head;
    }
};