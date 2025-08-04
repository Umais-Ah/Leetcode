class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
    int n=arr.size();
    int count=0; int presum=0;
    unordered_map<int,int> hashmap;
    hashmap[0]=1;
    for(int i=0;i<n;i++){
      presum+=arr[i];
      int prefix=presum-k;
      //if exist
      if(hashmap.find(prefix)!=hashmap.end()){
        count+=hashmap[prefix];
        hashmap[presum]++;
      }
      else{
        hashmap[presum]++;
      }
    }

    return count;
    }
};