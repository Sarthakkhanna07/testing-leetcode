class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> frq;
        for(int& num: nums){
            frq[num]++;
            if(frq[num] == 2){
                ans.push_back(num);
            }
        }
        return ans;

    }
};