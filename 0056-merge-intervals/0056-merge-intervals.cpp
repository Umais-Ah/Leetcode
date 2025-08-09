class Solution {
public:
vector<vector<int>> merge(vector<vector<int>>& arr) {
 int n=arr.size(); vector<vector<int>> ans;    
   
    sort(arr.begin(),arr.end());
    int i=0;
    while(i < n){
        int count=1;
        int start=arr[i][0];
        int end=arr[i][1];
        int j=i+1;    
        while( j < n && end >= arr[j][0] ){
            end=max(end,arr[j][1]);
            count++; 
            j++;
        }
        ans.push_back({start,end});
        i+=count;
    }

    return ans;

 
   }

   
  
};