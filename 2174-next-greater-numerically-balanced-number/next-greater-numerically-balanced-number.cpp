class Solution {
private:
    // A static set to store all balanced numbers, initialized once.
    static set<long long> balancedNumbers;

    static set<long long> initBalancedNumbers() {
        set<long long> s;

        vector<string> bases = {
            "1", "22", "122", "333", "1333", "4444", "14444", "22333", "55555",
            "122333", "155555", "224444", "666666", "1224444", "1666666", 
            "2255555", "3334444", "7777777", 
            "12255555"
        };

        for (string base : bases) {
            do {
                // Convert the permutation string to long long and insert into the set
                s.insert(stoll(base)); 
            } while (next_permutation(base.begin(), base.end()));
        }
        return s;
    }

public:
    int nextBeautifulNumber(int n) {
        // Find the first element in the set that is strictly greater than n
        auto it = balancedNumbers.upper_bound(n);

        return (it != balancedNumbers.end()) ? *it : -1;
    }
};

// Initialize the static member variable outside the class
set<long long> Solution::balancedNumbers = Solution::initBalancedNumbers();