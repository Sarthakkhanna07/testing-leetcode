class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i + 2 * k <= n; i++) {
            bool first = true, second = true;

            for (int j = i + 1; j < i + k; j++) {
                if (nums[j-1] >= nums[j]) {
                    first = false;
                    break;
                }
            }

            if (!first) continue;

            for (int j = i + k + 1; j < i + 2 * k; j++) {
                if (nums[j-1] >= nums[j]) {
                    second = false;
                    break;
                }
            }

            if (first && second) return true;
        }
        return false;
    }
};
