class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
     vector<vector<int>> ans; int n=arr.size();
        sort(arr.begin(),arr.end()); int j=0; int k=0; 


        for(int i=0;i<n;i++){
            if(i > 0 && arr[i]==arr[i-1])  continue;
            j=i+1;
            k=n-1;
            while(j < k){
                int sum=arr[i] + arr[j] + arr[k];
                if(sum > 0) k--;
                else if(sum < 0 ) j++;
                else {
                    vector<int> temp={arr[i] , arr[j] , arr[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(arr[j]==arr[j-1] && j < k) j++;
                    while(arr[k]==arr[k+1] && j < k) k--;
                } 

                
            }
        }
  return ans;    
    }
};