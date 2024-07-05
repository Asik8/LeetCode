#include <bits/stdc++.h>
using namespace std;
#define ll long long

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

void Insert_Tail(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int n;
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        Insert_Tail(head, tail, n);
    }

    vector<int> result = nodesBetweenCriticalPoints(head);
    cout << result[0] << " ";
    cout << result[1] << endl;

    return 0;
}

