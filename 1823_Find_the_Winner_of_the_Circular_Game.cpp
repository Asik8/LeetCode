class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        int l = 0;
        while(v.size()>1)
        {
            int rmv = (l+k-1)%v.size();
            v.erase(v.begin()+rmv);
            l = rmv;
        }
        return v[0];
    }
};