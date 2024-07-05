#include<bits/stdc++.h>
using namespace std;
#define ll long long

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int val) {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

void Insert_Tail(ListNode *&head,ListNode *&tail,int val)
{
    ListNode * newNode = new ListNode (val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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

    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v,loc;
        int c = Count(head);
        if(c<3)
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        ListNode* tmp = head;
        int val = tmp->val,i=2;
        while (tmp->next->next != NULL)
        {
            if(tmp->next->val >val && tmp->next->val >tmp->next->next->val)
            {
                loc.push_back(i);
            }
            else if(tmp->next->val < val && tmp->next->val < tmp->next->next->val)
            {
                loc.push_back(i);
            }
            tmp = tmp->next;
            val = tmp->val;
            i++;
        }
        if(loc.size() == 1)
        {
            v.push_back(0);
            v.push_back(0);
        }
        else
        {
            int l = v.size();
            sort(loc.begin(),loc.end());
            v.push_back(v[l-1]-v[l-2]);
            v.push_back(v[l-1]-v[0]);
        }
        return v;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ListNode * head = NULL;
    ListNode * tail = NULL;
    int n;
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        Insert_Tail(head,tail,n);
    }
    
    return 0;
}

