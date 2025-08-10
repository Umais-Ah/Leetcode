class Solution {
public:
 vector<int> findErrorNums(vector<int>& arr) {
    int n=arr.size();
    vector<int> hash(n+1, 0); int repeating=-1; int missing=-1;
  
  for(int i=0;i<n;i++){
    hash[arr[i]]++;
  }

  for(int i=1;i<n+1;i++){
    
    if(hash[i]==0){
        missing=i;
    }
    if(hash[i]==2){
        repeating=i;
    }

    if(missing !=-1 && repeating != -1){
        break;
     }
    }
    
    vector<int> ans={repeating,missing}; 
    return ans;

        
    }
    
};