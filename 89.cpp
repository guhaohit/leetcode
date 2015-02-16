class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> code;
        code.push_back(0);
        for(int i=0;i<n;i++){
            int len=1<<i;
            for(int j=len-1;j>=0;j--){
                code.push_back(code[j]+len);
            }
        }
        return code;
    }
};