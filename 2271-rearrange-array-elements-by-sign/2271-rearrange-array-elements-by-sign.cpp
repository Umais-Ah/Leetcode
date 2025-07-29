class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> pos;
        vector<int> neg;
        int n=arr.size();
          for(int i=0;i<n;i++){
            if(arr[i] > 0){
               pos.push_back(arr[i]); 
            }
            else{
                neg.push_back(arr[i]);
            }
          }
          int posIndices=0;
          int negIndices=0;
          for(int i=0;i<n;i++){
              if(i%2==0){
              arr[i]=pos[posIndices++];
              }
              else{
              arr[i]=neg[negIndices++]; 
              }
          }
        
          return arr;
    }
};