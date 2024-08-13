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
    void Insert_Last(ListNode* &head, ListNode* &tail,int val)
    {
        ListNode * node = new ListNode(val);
        if(head == NULL)
        {
            head = node;
            tail = node;
            return;
        }
        tail->next = node;
        tail = node;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL;
        ListNode *tail = NULL;
        int c = 0;
        while(l1 != NULL || l2 !=NULL)
        {
            int v1,v2;
            if(l1 == NULL) v1 = 0;
            else 
            {
                v1 = l1->val;
                l1 = l1->next;
            }
            if(l2 == NULL) v2 = 0;
            else 
            {
                v2 = l2->val;
                l2 = l2->next;
            } 
            int s = v1+v2+c;
            if(s<=9)c=0;
            else
            {
                c = s/10;
                s %= 10;
            }
            Insert_Last(head,tail,s);
        }
        if(c) Insert_Last(head,tail,c);
        return head;
    }
};