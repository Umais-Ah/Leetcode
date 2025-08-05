class Solution {
public:

vector<int> generateRow(int n){
              int ans=1;
              vector<int> ansRow;
              ansRow.push_back(ans);
              for(int i=1;i<n;i++){
                ans=ans*(n-i);
                ans=ans/i;
                ansRow.push_back(ans);
              }
              return ansRow;
        }

    vector<vector<int>> generate(int numRows) { 
          vector<vector<int>> ans;
          for(int i=0;i<numRows;i++){
            ans.push_back(generateRow(i+1));        
            }

            return ans;
    }
};