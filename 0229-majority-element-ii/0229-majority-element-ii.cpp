class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
    vector<int> v;  int n=arr.size();
    for(int i=0;i<n;i++){
        if(v.size()==0 || v[0] != arr[i]){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                  cnt++;
                }
            }
            if(cnt > n/3){
                v.push_back(arr[i]);
            }   
        }
        if(v.size()==2){
                break;
            }
    }
      return v;
    }

};