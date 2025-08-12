class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0; int high=n-1; int mid;
        while(low <= high){
          mid=(low + high)/2;
          if(arr[mid]==target) return mid;
          else if(arr[mid] > target) high=mid-1;
          else low=mid+1;
        }
        if (arr[mid] > target) return mid; 
        else  return mid+1;
    }
};