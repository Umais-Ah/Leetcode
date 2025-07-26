class Solution {
public:
    void sortColors(vector<int>& arr) {
   int count1=0,count2=0,count3=0;
   int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count1++; 
        }
        else if(arr[i]==1){
            count2++; 
         }
         else{
            count3++; 
        }
    }

    for(int i=0;i<n;i++){
        if(i>=0 && i < count1){
         arr[i]=0;
        }
        else if(i>=count1 && i < count1+count2){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
    }
    
 
    }
};