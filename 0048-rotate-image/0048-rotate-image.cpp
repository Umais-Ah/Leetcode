class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int row[n];
    int col[n];                                            
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(row[i]!=1 || col[j]!=1){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
            row[j]=1;
            col[i]=1;
        }
    }
    }

    // swaping of transpose
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }   
     
 
    }
};