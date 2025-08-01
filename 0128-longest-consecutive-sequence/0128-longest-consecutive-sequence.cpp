class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int count=1;
    int maxi=1;
    if(arr.size() > 0 ){
    for(int i=0;i<arr.size()-1;i++){
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