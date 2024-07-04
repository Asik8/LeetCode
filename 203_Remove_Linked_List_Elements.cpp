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

    ListNode* removeElements(ListNode* &head, int val) {
        if(head == NULL) return head;
        ListNode* tmp = head;
        while(tmp->next != NULL)
        {
            if(tmp->next->val == val)
            {
                ListNode* d = tmp->next;
                tmp->next = tmp->next->next;
                delete d;
            }
            else tmp = tmp->next;
        }
        tmp = head;
        if(tmp->val == val)
        {
            ListNode* d = tmp;
            head = tmp->next;
            delete d;
        }
        Print(head);
        return head;
    }
};