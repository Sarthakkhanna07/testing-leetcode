class Solution {
public:
    int getLucky(string s, int k) {
        string a;
        for(char &ch : s){
            int c = ch - 'a' + 1;
            a += to_string(c);
        }

        int sum = 0;
        while (k > 0) {
            sum = 0;
            for(char &i : a){
                sum += i - '0';
            }
            a = to_string(sum);
            k--;
        }

        return sum;
    }
};
