class Solution {
public:

int countPair(int low ,int mid,int high,vector<int> &arr){
    int j=mid+1; int count=0;
    for(int i=low;i<=mid;i++){
    while(j<=high && (long long) arr[i] > 2 * (long long)arr[j]){
           j++;       
    }

    count+=j-(mid+1);
    }

   return count;

}

int merge(vector<int> &arr,int low,int mid,int high){
    vector<int> v;
    int left=low;
    int right=mid+1;
   
   int count=countPair(low,mid,high,arr);
   
  while(left<=mid && right <= high){
    if(arr[left] <= arr[right]){
        v.push_back(arr[left]);
        left++;
    }
    else{
        v.push_back(arr[right]);
        right++;
    }
  }

  while(left<=mid){
    v.push_back(arr[left]);
    left++;
  }

  while(right<=high){
    v.push_back(arr[right]);
    right++;
  }

  for(int i=low;i<=high;i++){
    arr[i]=v[i-low];
  }

return count;

}




int  mergesort(vector<int> &arr,int low,int high){
  int count=0;
  if(low>=high) return count;
  int mid=(low+high)/2;
 count+=mergesort(arr,low,mid);
 count+=mergesort(arr,mid+1,high);
 count+=merge(arr,low,mid,high);

 return count;

}


int reversePairs(vector<int> &arr){
        int n=arr.size();
        int count=mergesort(arr,0,n-1);
        return count;
}
};