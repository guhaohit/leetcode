class Solution {
public:
    int totalNQueens(int n) {
        int result=0;
        vector<int> A(n,-1);
        nQueens(A,0,n,result);
        return result;
    }

    bool IsValid(vector<int> A,int now){
        for(int i=0;i<now;i++){
            if(A[i]==A[now] || abs(A[i]-A[now])==(now-i)){
                return false;
            }
        }
        return true;
    }
    void nQueens(vector<int> A,int now,int n,int &result){
        if(now==n)
            result++;
        else{
            for(int i=0;i<n;i++){
                A[now] = i;
                if(IsValid(A,now))
                    nQueens(A,now+1,n,result);
            }
        }

    }
};