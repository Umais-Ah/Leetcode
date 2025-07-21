class Solution {
public:
bool check(vector<int>& nums) {
    vector<int> nums2;
    bool isSort=true;
    int x=0;

    for(int i=0;i<nums.size()-1;i++){
     if( nums[i] > nums[i+1]){
         isSort=false;
         x=i+1;
         break;
    }
    }

    if(x > 0){
    isSort=true;

    for(int i=0;i<nums.size();i++){
        nums2.push_back( nums[(i+x) %  nums.size()]);
    }


    for(int i=0;i<nums.size()-1;i++){
        if( nums2[i] > nums2[i+1]){
            isSort=false;
            break;
       }
       }

    }

 
    return isSort;
    }
};