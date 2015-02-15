class Solution {
public:
    int findMin(vector<int> &num) {
        int start=0,end=num.size()-1;
        while(start<end && num[start]>=num[end]){
            if(num[start]==num[end]){
                start++;
                continue;
            }
            int mid = (start+end)/2;
            if(num[end]>=num[mid])
                end = mid;
            else if(num[start]<=num[mid])
                start = mid+1;
        }
        return num[start];
    }
};