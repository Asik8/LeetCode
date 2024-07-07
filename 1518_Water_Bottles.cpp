class Solution {
public:
    int numWaterBottles(int n, int m) {
        int ans = n;
        while(n>=m)
        {
            int d = n/m;
            ans += d;
            n %= m;
            n += d;
        }
        return ans;
    }
};