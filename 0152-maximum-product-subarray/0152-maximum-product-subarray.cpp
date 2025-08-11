class Solution {
public:
 int maxProduct(vector<int>& arr) {
   int suffix=1; int prefix=1; int maxi=INT_MIN; int n=arr.size();
   for(int i=0;i<n;i++){
    if(prefix ==0) prefix=1;
    if(suffix ==0) suffix=1;
      prefix*=arr[i];
      suffix*=arr[n-i-1];

      maxi=max(maxi,max(suffix,prefix));
   }

   return maxi;

    }
};