class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int week = 0;
        for(int i = 0; i < n; i++){
            ans += ((i % 7) + 1 + week);
            week = (i + 1) / 7;
        }
        return ans;
    }
};
