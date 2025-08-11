class Solution {
public:
int recursive(vector<int>& arr, int low, int high, int target) {
    if (high < low) 
        return -1; 

    int mid = (low + high) / 2;

    if (arr[mid] == target) 
        return mid;
    else if (arr[mid] > target) 
        return recursive(arr, low, mid - 1, target); 
    else 
        return recursive(arr, mid + 1, high, target);
}
  int search(vector<int>& arr, int target) {
       return recursive(arr,0,arr.size()-1,target);
    }
};