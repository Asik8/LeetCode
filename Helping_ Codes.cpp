// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    // ListNode(int x) : val(x), next(NULL) {}
};

int Count(ListNode *head)
{
    ListNode *tmp = head;
    int c = 0;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }
    return c;
}

void Print(ListNode *head)
{
    ListNode *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse(ListNode *&head, ListNode *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
