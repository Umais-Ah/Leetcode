class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
    int n=arr.size();
     vector<int> ans;  vector<int> hash(n+1, 0);
       hash[0]=1;
      for(int i=0;i<n;i++){
        hash[arr[i]]++;
        }

    for(int i=0;i<n+1;i++){
        if(hash[i] == 2){
               ans.push_back(i);
        }
    }


    for(int i=0;i<n+1;i++){
        if(hash[i] == 0){
               ans.push_back(i);
        }
    }
        
     

        return ans;
        
    }
    
};