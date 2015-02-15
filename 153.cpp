class Solution {
public:
    int findMin(vector<int> &num) {
        return minNum(num,0,num.size()-1);
    }
    int minNum(vector<int> &num,int start,int end){
        if(start == end)
            return num[start];
        if(start+1 == end)
            return min(num[start],num[end]);
        int mid=(start+end)/2;
        if(num[start]<num[mid] && num[mid]<num[end])
            return num[start];
        if(num[start]<num[mid] && num[mid]>num[end])
            return minNum(num,mid,end);
        if(num[start]>num[mid] && num[mid]<num[end])
            return minNum(num,start,mid);
    }
};