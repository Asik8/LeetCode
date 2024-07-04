class Solution {
public:
    void reverse(ListNode* &head,ListNode* cur)
    {
        if(cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head,cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    } 

    void Insert_Tail(ListNode* &head,ListNode* &tail,int val)
    {
        ListNode * newNode = new ListNode(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* nhead = NULL;
        ListNode* ntail = NULL;
        ListNode* tmp = head;
        while(tmp != NULL)
        {
            Insert_Tail(nhead,ntail,tmp->val);
            tmp = tmp->next;
        }
        reverse(nhead,nhead);
        ListNode *t = nhead;
        tmp = head;
        while(tmp != NULL)
        {
            if(tmp->val != t->val)
                return false;
            tmp = tmp->next;
            t = t->next;
        }
        return true;
    }
};