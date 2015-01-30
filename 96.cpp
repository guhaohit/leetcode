class Solution {
public:
    int numTrees(int n) {
        return calNum(1,n);

    }
    int calNum(int a,int b){
        if(a >= b){
            return 1;
        }
        int result = 0;
        for(int i = a;i<b+1;i++){
            result += calNum(a,i-1)*calNum(i+1,b);
        }
        return result;
    }
};