class Solution {
public:
    void sortColors(vector<int>& arr) {
    int n=arr.size();
    int mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high && low <=mid){
        if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else{
            swap(arr[mid],arr[high]);
             high--;
        }
    }
    }
};