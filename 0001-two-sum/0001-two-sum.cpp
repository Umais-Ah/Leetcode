class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
      map<int,int> hashmap;
    int n=v.size();
    for(int i=0;i<n;i++){
             int x=target-v[i];
             if(hashmap.find(x) != hashmap.end()){
                return {hashmap[x],i}; 
             }
             hashmap[v[i]]=i;
    
  
    }  
      return {-1,-1};
    }
};