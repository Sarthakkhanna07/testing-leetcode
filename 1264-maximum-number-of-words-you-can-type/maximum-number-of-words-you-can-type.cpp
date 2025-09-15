class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool broken[26] = {0};
        for(char ch : brokenLetters){
            broken[ch - 'a'] = 1;
        }

        int count = 0;
        bool wordIsBroken = 0;

        for(int i = 0; i<text.size(); i++){
            char ch = text[i];
            if(ch == ' '){
                if(!wordIsBroken) count++;
                else wordIsBroken = 0;
            } else if(!wordIsBroken && broken[ch-'a']){
                wordIsBroken = 1;
            }
        }
        if(!wordIsBroken) count++;
        return count;
    }
};