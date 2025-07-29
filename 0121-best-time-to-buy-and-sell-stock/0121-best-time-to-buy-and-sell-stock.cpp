class Solution {
public:
    int maxProfit(vector<int>& arr) {
   int max_profit = 0;
int current_profit = 0;

for(int i = 1; i < arr.size(); i++){
    current_profit += arr[i] - arr[i - 1];  // Daily profit/loss
    if(current_profit < 0) current_profit = 0;  // Reset if losing
    if(current_profit > max_profit) max_profit = current_profit;
}
return max_profit;
    }

    
};