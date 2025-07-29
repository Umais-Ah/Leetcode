class Solution {
public:
    int maxProfit(vector<int>& arr) {
  int mini=arr[0];
  int maxi=0;
 
   int profit=0;

   for(int i=1;i<arr.size();i++){
      profit = arr[i]- mini;
      maxi=max(profit,maxi);
      mini=min(mini,arr[i]);
   }

   return maxi;
    }

    
};