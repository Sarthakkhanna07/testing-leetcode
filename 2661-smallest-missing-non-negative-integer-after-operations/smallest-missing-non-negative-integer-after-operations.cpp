class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            int mod = ((num % value) + value) % value;  // handle negatives
            freq[mod]++;
        }

        int x = 0;
        while (true) {
            int rem = x % value;
            if (freq[rem] > 0) {
                freq[rem]--;  // use one occurrence
            } else {
                return x;  // first missing integer
            }
            x++;
        }
    }
};
