class Solution {
public:
    bool search(vector<int>& arr, int target) {
     set<int> s;  int n=arr.size();   
     for(int i=0;i<n;i++){
           s.insert(arr[i]);
        }

      vector<int> v={s.begin(),s.end()};
      int low=0; int high=v.size()-1; 
      while(low<=high){
        int mid=(low+ high)/2;
        if(v[mid]==target) return true;
        else if(v[mid] > target) high=mid-1;
        else low=mid+1;
      }

      return false;
    }
};