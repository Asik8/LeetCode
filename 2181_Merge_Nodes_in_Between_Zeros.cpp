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

    ListNode* mergeNodes(ListNode* &head) {
        ListNode * tmp = head;
        ListNode * zero = head;
        long long sum = 0;
        while(tmp != NULL)
        {
            if(tmp->next->val == 0)
            {
                tmp->val += sum;
                zero->next = tmp;
                zero = tmp->next;
                sum = 0;
                tmp = tmp->next->next;
            }
            else
            {
                sum+= tmp->val;
                tmp = tmp->next;
            }
        }
        tmp = head;
        zero = NULL;
        while(tmp != NULL)
        {
            if(tmp->val == 0 && zero !=NULL)
            {
                zero->next = tmp->next;
                delete tmp;
                tmp = zero->next;
            }
            else
            {
                zero = tmp;
                tmp = tmp->next;
            }
        }
        if(head->val == 0)
        {
            ListNode* d = head;
            head = head->next;
            delete d;
        }

        Print(head);
        return head;
    }
};