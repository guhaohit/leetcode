class Solution {
public:
    vector<vector<int> > result;
    vector<vector<int> > permute(vector<int> &num) {
        vector<int> remain = num;
        vector<int> now;
        MyPermute(remain,now);
        return result;
    }
    
    void MyPermute(vector<int> remain,vector<int> now){
        if(remain.size() == 0){
            result.push_back(now);
        }
        for(int i = 0;i<remain.size();i++){
            vector<int> left = remain;
            vector<int> nowVec = now;
            left.erase(left.begin()+i);
            nowVec.push_back(remain[i]);
            MyPermute(left,nowVec);
            
        }
    }
};