class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int XOR1=0;
      int XOR2=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
              XOR1=XOR1^nums[i];
              XOR2=XOR2^(i);
      }
      XOR2=XOR2^n;
      return XOR1^XOR2;
     
    }
        };