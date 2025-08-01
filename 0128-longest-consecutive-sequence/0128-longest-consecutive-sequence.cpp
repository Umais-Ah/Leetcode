class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int count=1;
    int maxi=1;
    int n=arr.size();
    if(n > 0 ){
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]-1){
            count++;
            maxi=max(count,maxi);
        }
         else if(arr[i]-1 < arr[i+1]-1){
            count=1;
        }
    }
    return maxi;
    }
     return 0;
    } 
};