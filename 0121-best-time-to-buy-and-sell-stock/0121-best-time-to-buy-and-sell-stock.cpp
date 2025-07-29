class Solution {
public:
    int maxProfit(vector<int>& arr) {
  int mini=arr[0];
  int maxi=0;

   for(int i=1;i<arr.size();i++){
     int profit = arr[i]- mini;
      maxi=max(profit,maxi);
      mini=min(mini,arr[i]);
   }

   return maxi;
    }

    
};