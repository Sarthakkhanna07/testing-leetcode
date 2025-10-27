class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        vector<int> cams(n, 0);

        for (int i = 0; i < n; i++) {
            for (char c : bank[i]) {
                if (c == '1') cams[i]++;
            }
        }

        long long ans = 0;
        int prev = 0; // previous non-empty row camera count

        for (int i = 0; i < n; i++) {
            if (cams[i] == 0) continue;
            ans += (long long)prev * cams[i];
            prev = cams[i];
        }

        return ans;
    }
};
