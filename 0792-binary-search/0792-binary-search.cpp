class Solution {
public:
  int search(vector<int>& arr, int target) {
  int n=arr.size();
  int high=n-1;
  int low=0;
 
  while(high  >= low){
  int mid=(high + low)/2;
  if(arr[mid] > target){
    high=mid-1;
  }
  else if(arr[mid] < target) {
    low=mid+1;
  }
  else{
    return mid;
  }
  }
  return -1;
    }
};