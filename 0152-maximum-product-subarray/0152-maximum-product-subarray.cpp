class Solution {
public:
    int maxProduct(vector<int>& arr) {
    int maxi=arr[0]; int n=arr.size();

   for(int i=0;i<n;i++){
    int  product=1;
    for(int j=i;j<n;j++){
         product*=arr[j];
         maxi=max(maxi,product);
    }
   }


   return maxi;

    }
};