class Solution {
public:
vector<int> majorityElement(vector<int>& arr) {
    vector<int> v; int cnt1=0; int cnt2=0;  int n=arr.size();
    int el1=INT_MIN;
    int el2=INT_MIN;
   for(int i=0;i<n;i++){
     if(cnt1==0 && arr[i] != el2){
        cnt1=1;
        el1=arr[i];
     }
     else if(cnt2==0 && arr[i] != el1){
        cnt2=1;
        el2=arr[i];
     }
     else if(arr[i]==el1) cnt1++;
     else if(arr[i]==el2) cnt2++;
     else{
        cnt1--; cnt2--;
     }
    }

    cnt1=0;  cnt2=0;

     for(int i=0;i<n;i++){
        if(arr[i]==el1) cnt1++;
        if(arr[i]==el2) cnt2++;
     }

     int  minimum=n/3+1;
     if(cnt1 >= minimum)  v.push_back(el1);
     if(cnt2 >= minimum)  v.push_back(el2);

     return v;
}

};