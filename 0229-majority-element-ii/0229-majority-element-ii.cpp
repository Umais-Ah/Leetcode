class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
   int n=arr.size();
   vector<int> v;   bool repeat=false;
    for(int i=0;i<n;i++){
        bool repeat=false;
        int count=0;
       
            for(int val : v){
                if(val==arr[i]){
                    repeat=true;
                }
            }

        if(repeat!=true){
         for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
         }
           if(count > n/3){
               v.push_back(arr[i]);
            }
        }
    }
    return v;
    }

};