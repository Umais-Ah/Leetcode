class Solution {
public:
vector<vector<int>> fourSum(vector<int>& arr, int target) {
int n=arr.size();
 set<vector<int>> s;
 sort(arr.begin(),arr.end());
 for(int i=0;i<n;i++){
    if(i > 0 && arr[i] ==arr[i-1]) continue;
    for(int j=i+1;j<n;j++){
      int k=j+1;
      int l=n-1;
      while (k < l){
      long long sum=arr[i] + arr[j];
      sum+=arr[k];
      sum+=arr[l];
      if(sum > target) l--;
      else if(sum < target) k++;
      else{
         vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
         s.insert(temp);
         k++;
         l--;
         while(arr[k]==arr[k-1] && k<l) k++;
         while(arr[l]==arr[l+1] && k<l) l--;
      }
      }
    }
 }
 vector<vector<int>> ans(s.begin(),s.end());         
 return ans;
    }
};