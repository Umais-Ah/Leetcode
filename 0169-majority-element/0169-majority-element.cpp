class Solution {
public:
    int majorityElement(vector<int>& arr) {
     int n=arr.size();

     map<int,int> m;  
     for(int i=0;i<n;i++){
         m[arr[i]]++;
     }
     

     for(auto it:m){
        if(it.second > n/2){
            return it.first;
        }
     }
     return {};
    }

};