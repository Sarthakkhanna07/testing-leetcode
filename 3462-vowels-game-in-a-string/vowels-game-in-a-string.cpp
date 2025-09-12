class Solution {
public:
    bool doesAliceWin(string s) {
        for(char ch: s){
            if(isvowel(ch)){
                return true;
            }
        }
        return false;
    }

    bool isvowel(char ch){
        switch(ch){
            case 'a': case 'e': case 'i': case 'o': case 'u':
                return true;
            default:
                return false;
        }
    }
};