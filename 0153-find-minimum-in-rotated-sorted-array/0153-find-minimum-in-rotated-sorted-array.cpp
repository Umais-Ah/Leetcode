class Solution {
public:
    int findMin(vector<int>& arr) {
   int low=0; int high=arr.size()-1; 
    int mini=INT_MAX;
    while(low <= high){
    int mid=(low + high )/2;
    if(arr[mid] >= arr[low]){
               mini=min(mini,arr[low]);
               low=mid+1;
    }
    else{
      mini=min(arr[mid],mini);
      high=mid-1;
       }
    } 
    return mini;
    }
};