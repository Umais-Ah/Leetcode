class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {        
    int n=arr.size(); int low=0; int high=n-1; vector<int> v; int ans=-1;    
   
    while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid] >= target){
      if(arr[mid]==target)  ans=mid;
        high=mid-1;
    }
    else low=mid+1;
    }

    v.push_back(ans);

    low=0; high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid] <= target){
            if(arr[mid]==target) ans=mid;
            low=mid+1;
        }
        else high=mid-1;
        }

    v.push_back(ans);

   
    return v;
    }
};