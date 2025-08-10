class Solution {
public:
 vector<int> findErrorNums(vector<int>& arr) {
    long long n=arr.size();
    long long  sn=n*(n+1)/2;
    long long sn2=(n)*(n+1)*(2*n+1)/6; 
    long long  s=0; long long  s2=0;
    for(int i=0;i<n;i++){
       s+=arr[i];
       s2+=(long long)arr[i]*(long long)arr[i];
    }   
    long long val1=s-sn;//x-y
    long long val2=s2-sn2;//x^2-y^2
    val2=val2/val1;//x+y
    
    long long x=(val1 + val2)/2;
    long long y=val2-x;


    return{int(x),int(y)};
        
    }
    
};