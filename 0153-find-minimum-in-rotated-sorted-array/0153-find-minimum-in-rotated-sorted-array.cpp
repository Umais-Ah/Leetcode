class Solution {
public:
    int findMin(vector<int>& arr) {
 int low=0; int high=arr.size()-1; int ans;
  while(low <= high){
    int mid=(low + high )/2;
    if(arr[mid] <= arr[low] && arr[mid] <= arr[high]){
      ans=arr[mid];
      low=low+1;
      high=high-1;
    }
    else if(arr[mid] > arr[high]){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
  }
    return ans;
    }
};