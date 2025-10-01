class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;
        while(numBottles >= numExchange){
            int temp = numBottles/numExchange;
            numBottles %= numExchange;
            numBottles += temp;
            count += temp;
        }
        return count;
    }
};