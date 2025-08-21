class Solution {
public:
    int mySqrt(int n) {
    int ans=0;
    for(int i=0;i<=n;i++){
        if((long long)i*i > n ) break;
        else ans=i; 
    }

    return ans;
    }
};