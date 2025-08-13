class Solution {
public:
    int search(vector<int>& arr, int target) {
     map<int,int> m; int n=arr.size();
    for(int i=0;i<n;i++){
      m[arr[i]]=i;
   }

   sort(arr.begin(),arr.end());
   int ans=-1;
   int low=0; int high=n-1;

   while(low<=high){
   int mid=(low+ high)/2;
   if(arr[mid]==target){
     ans=mid;
     break;
   }
   else if(arr[mid] > target) high=mid-1;
   else  low=mid+1;
   }

  if(ans!=-1){
    return m[arr[ans]];
  }
  
  return ans;
    }
};