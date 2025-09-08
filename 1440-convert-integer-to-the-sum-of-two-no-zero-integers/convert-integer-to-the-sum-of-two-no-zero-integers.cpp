class Solution {
public:
    bool hasZero(int x) {
        while (x > 0) {
            if (x % 10 == 0) return true;
            x /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        int a = n / 2;
        int b = n - a;

        while (hasZero(a) || hasZero(b)) {
            a--;
            b++;
        }
        return {a, b};
    }
};
