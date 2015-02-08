class Solution {
public:
    vector<vector<string> > solveNQueens(int n) {
        vector<int> A(n,-1);
        vector<vector<string> > result;
        nQueens(A,0,n,result);
        return result;
    }

    bool IsValid(vector<int> A,int now){
        for(int i=0;i<now;i++){
            if(A[i]==A[now] || abs(A[i]-A[now])==(now-i))
                return false;
        }
        return true;
    }

    void nQueens(vector<int> A,int now,int n,vector<vector<string> > &result){
        if(now==n)
            PrintResult(A,result,n);
        else{
            for(int i=0;i<n;i++){
                A[now] = i;
                if(IsValid(A,now))
                    nQueens(A,now+1,n,result);
            }
        }
    }

    void PrintResult(vector<int> A,vector<vector<string> > &result,int n){
        vector<string> r;
        for(int i=0;i<n;i++){
            string str(n,'.');
            str[A[i]] = 'Q';
            r.push_back(str);
        }
        result.push_back(r);
    }
};