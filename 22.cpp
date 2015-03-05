class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        result.clear();
        mysolve(0,2*n,0,0,"");
        return result;
    }
    void mysolve(int dep,int maxdepth,int leftnum,int leftstay,string s){
        if(leftnum*2 > maxdepth)
            return;
        if(dep == maxdepth){
            result.push_back(s);
            return;
        }
        mysolve(dep+1,maxdepth,leftnum+1,leftstay+1,s+"(");
        if(leftstay>0){
           mysolve(dep+1,maxdepth,leftnum,leftstay-1,s+")"); 
        }
    }
};