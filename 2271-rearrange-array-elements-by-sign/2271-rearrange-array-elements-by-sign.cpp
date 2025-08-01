class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
    int even=0;int odd=1; 
    int n=arr.size();
    vector<int> arr2(n);
    for(int i=0;i<n;i++){
    if(arr[i]>0){
     arr2[even]=arr[i];
     even=even+2;
    }
   else{
    arr2[odd]=arr[i];
    odd=odd+2;
   }
}
 return arr2;
    }
};