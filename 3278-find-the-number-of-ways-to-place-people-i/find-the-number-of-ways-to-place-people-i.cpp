class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            int xi = points[i][0], yi = points[i][1];
            for (int j = 0; j < n; ++j) {
                int xj = points[j][0], yj = points[j][1];

                if (!(xi <= xj && yi >= yj && (xi < xj || yi > yj))) continue;

                bool valid = true;
                
                for (int k = 0; k < n; ++k) {
                    if (k == i || k == j) continue;
                    int xk = points[k][0], yk = points[k][1];

                    if (xk >= xi && xk <= xj && yk >= yj && yk <= yi) {
                        valid = false;
                        break;
                    }
                }
                if (valid) ++ans;
            }
        }

        return ans;
    }
};
