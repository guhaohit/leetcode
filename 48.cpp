class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int n = matrix.size();
        int i = 0,j = n-1;
        while(i<j){
             rotateMatrix(matrix,i,j);
             i++;
             j--;
        }
        
    }
    void rotateMatrix(vector<vector<int> > &matrix,int i ,int j){
        for(int k = 0;k<j-i;k++){
            int temp = matrix[i][i+k];
            
            matrix[i][i+k] = matrix[j-k][i];
            matrix[j-k][i] = matrix[j][j-k];
            matrix[j][j-k] = matrix[i+k][j];
            matrix[i+k][j] = temp;
        }
    }
};