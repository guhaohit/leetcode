class Solution {
public:
    int majorityElement(vector<int> &num) {
        int result=num[0];
        int label=1;
        for(int i=1;i<num.size();i++){
            if(num[i]==result){
                label++;
            }
            else{
                label--;
            }
            if(label==0){
                result = num[i];
                label=1;
            }
        }
        return result;
    }
};