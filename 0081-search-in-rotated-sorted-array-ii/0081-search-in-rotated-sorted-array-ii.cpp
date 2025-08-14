class Solution {
public:
    bool search(vector<int>& arr, int target) {
  int low=0; int high=arr.size()-1;

  while(low <= high){
    int mid=(low + high)/2;

    if(arr[mid]==target) return true;
    else if(arr[mid] == arr[low] && arr[mid] ==arr[high]) {
      low=low+1; 
      high=high-1;
      continue;
    }
    else if(arr[mid] >=arr[low]){
      if(target >= arr[low] && target <=arr[mid]) high=mid-1;
      else low=mid+1;
    } 
    else{
      if(target >= arr[mid] && target <=arr[high]) low=mid+1;
      else high=mid-1;
    }
  }

  return false;
    }
};