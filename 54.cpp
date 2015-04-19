class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> result;
        int m = matrix.size();
        if(m==0)
            return result;
        int n = matrix[0].size();
        int leftTop = 0,rightTop = n-1,leftBottom = m-1;
        
        while(leftTop<=rightTop && leftTop<=leftBottom){
            if(leftTop==rightTop && rightTop==leftBottom)
                result.push_back(matrix[leftTop][leftTop]);
            else if(leftTop == rightTop){
                for(int i =leftTop;i<=leftBottom;i++)
                    result.push_back(matrix[i][leftTop]);
            }
            else if(leftTop == leftBottom){
                for(int i =leftTop;i<=rightTop;i++)
                    result.push_back(matrix[leftTop][i]);
            }
            else
                printOrder(result,matrix,leftTop,rightTop,leftBottom);
            leftTop++;rightTop--;leftBottom--;
        }
        return result;
    }
    
    void printOrder(vector<int> &result,vector<vector<int> > &matrix,int leftTop,int rightTop,int leftBottom){
        for(int i=leftTop;i<rightTop;i++){
            result.push_back(matrix[leftTop][i]);
        }
        for(int i=leftTop;i<leftBottom;i++){
            result.push_back(matrix[i][rightTop]);
        }
        for(int i=rightTop;i>leftTop;i--){
            result.push_back(matrix[leftBottom][i]);
        }
        for(int i=leftBottom;i>leftTop;i--){
            result.push_back(matrix[i][leftTop]);
        }
    }
};