class Solution {
public:
    int passThePillow(int n, int t) {
        int ans;
        if (t >= n) {
            int d = t /(n-1);
            t %= (n-1);
            if(d%2 == 0) ans = t+1;
            else ans = n-t;
        }
        else ans = t+1;
        return ans;
    }
};