class Solution {
public:
vector<int> majorityElement(vector<int>& arr) {
   vector<int> v;   int n=arr.size(); 
   unordered_map<int,int> hashmap;
   for(int i=0;i<n;i++){
     hashmap[arr[i]]++;
     if(hashmap[arr[i]]==n/3+1){
        v.push_back(arr[i]);
     }
   }
  return v;
}

};