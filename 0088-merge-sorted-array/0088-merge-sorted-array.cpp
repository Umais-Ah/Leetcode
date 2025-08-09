class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
          
    
    int j=0;
    vector<int> v;
    for(int i=m;i<m+n;i++){
      arr1[i]=arr2[j];
      j++;
    }

    sort(arr1.begin(),arr1.end());

    
    }
};