class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
   int n=arr.size();
   vector<int> v;
   unordered_map<int,int> hashmap;
   for(int i=0;i<n;i++){
     hashmap[arr[i]]++;
   }

   for(int i=0;i<n;i++){
           if(hashmap[arr[i]] > n/3){
                 v.push_back(arr[i]);
                 hashmap[arr[i]]=-1; 
           }
        }
        return v;
    }

};