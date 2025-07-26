class Solution {
public:
    int majorityElement(vector<int>& arr) {
     int el=arr[0]; int cnt=0; int n=arr.size();
     
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
       else if(arr[i]==el) cnt++;
       else cnt--;

    }

    return el;
    }
};