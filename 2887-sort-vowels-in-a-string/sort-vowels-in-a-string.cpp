class Solution {
public:
    string sortVowels(string s) {
        vector<int> vowels(10, 0);

        for (char c : s) {
            switch (c) {
                case 'A': vowels[0]++; break;
                case 'E': vowels[1]++; break;
                case 'I': vowels[2]++; break;
                case 'O': vowels[3]++; break;
                case 'U': vowels[4]++; break;
                case 'a': vowels[5]++; break;
                case 'e': vowels[6]++; break;
                case 'i': vowels[7]++; break;
                case 'o': vowels[8]++; break;
                case 'u': vowels[9]++; break;
                default: break;
            }
        }

        string order = "AEIOUaeiou";
        int idx = 0;

        for (char &c : s) {
            if (isVowel(c)) {
                while (idx < 10 && vowels[idx] == 0) idx++;
                c = order[idx];
                vowels[idx]--;
            }
        }

        return s;
    }

    bool isVowel(char c) {
        switch (c) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                return true;
            default: return false;
        }
    }
};
