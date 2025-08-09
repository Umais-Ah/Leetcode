class Solution {
public:
vector<vector<int>> merge(vector<vector<int>>& arr) {
  int n=arr.size();  vector<int> hash(n,0); vector<vector<int>> ans;    
  
   sort(arr.begin(),arr.end());

   for(int i=0;i<n;i++){
   if(hash[i]==1) continue;
    for(int j=0;j<n;j++){
          if(arr[i][1] >= arr[j][0]  && arr[i][0] <= arr[j][1]  ){
            arr[i][1]=max(arr[i][1],arr[j][1]);
            hash[j]=1;
          }
            else if(arr[i][1] < arr[j][0]){
            break;
          }
    }
    ans.push_back({arr[i][0],arr[i][1]});
   }

   
   return ans;

 
   }

   
  
};