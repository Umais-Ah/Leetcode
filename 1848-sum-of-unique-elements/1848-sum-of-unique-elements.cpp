class Solution {
public:
int sumOfUnique(vector<int>& arr) {
  int n=arr.size();
  int sum=0; map<int,int> hash;

  for(int i=0;i<n;i++){
     hash[arr[i]]++;
  }

  for(int i=0;i<hash.size();i++){
               if(hash[i]==1){
                 sum+=i;
               }                    
  }

  return sum;
    }
};