class Solution {
public:
    int mySqrt(int n) {
    int low=0; int high=n; int ans=1;

    while(low <= high){
    int mid=(low +high)/2;
    if( (long long)mid*mid > n ) high=mid-1;
    else{
         ans=mid;
         low=mid+1;
         }
    }

    return ans;
    }
};