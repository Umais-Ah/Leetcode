class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {        
     auto firstIt = lower_bound(arr.begin(), arr.end(), target);
        auto lastIt  = upper_bound(arr.begin(), arr.end(), target);

        if (firstIt == arr.end() || *firstIt != target)
            return {-1, -1};

        return {int(firstIt - arr.begin()), int(lastIt - arr.begin() - 1)};
    
    }
};