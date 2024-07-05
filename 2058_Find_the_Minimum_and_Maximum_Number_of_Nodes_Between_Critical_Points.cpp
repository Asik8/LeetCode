class Solution {
public:
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
        vector<int> v, loc;
        int c = Count(head);
        if (c < 3) {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        ListNode* tmp = head;
        int val = tmp->val, i = 2;
        while (tmp->next->next != NULL) {
            if (tmp->next->val > val && tmp->next->val > tmp->next->next->val ||
                tmp->next->val < val && tmp->next->val < tmp->next->next->val) {
                loc.push_back(i);
            }
            tmp = tmp->next;
            val = tmp->val;
            i++;
        }
        if (loc.size() <2) {
            v.push_back(-1);
            v.push_back(-1);
        } else {
            int l = loc.size();
            sort(loc.begin(), loc.end());
            int m = INT_MAX;
            for (int j = 1; j < l; j++) {
                m = min(m, loc[j] - loc[j - 1]);
            }
            v.push_back(m);
            v.push_back(loc.back() - loc.front());
        }
        return v;
    }
};