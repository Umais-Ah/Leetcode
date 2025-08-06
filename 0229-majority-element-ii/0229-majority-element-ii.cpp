class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
    vector<int> v; int n=arr.size();
    unordered_map<int,int> hashmap;
    for(int i=0;i<n;i++){
      hashmap[arr[i]]++;
     if(hashmap[arr[i]] > n/3 && (v.size()==0 || v[0] != arr[i])){
        v.push_back(arr[i]);
        hashmap[arr[i]]=-1; 
      }
      if(v.size()==2){
        break;
      }
    }
 
     return v;
    }

};