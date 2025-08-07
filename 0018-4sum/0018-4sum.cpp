class Solution {
public:
vector<vector<int>> fourSum(vector<int>& arr, int target) {
 set<vector<int>> s;  int n=arr.size();
  
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
            set<long long> hashset;
           for(int k=j+1;k<n;k++){
               long long l=target-arr[i];
               l-=arr[j];
               l-=arr[k];
                     if(hashset.find(l)!=hashset.end()){
                        vector<int> temp={arr[i] , arr[j] , arr[k] , int(l)};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                     }
                     hashset.insert(arr[k]);
               }
               
           }
       }
vector<vector<int>> ans(s.begin(),s.end());         
return ans;
    }
};