class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int start=0;int end=n;
        int mid;
        while(start<end-1){
            mid = (end+start)/2;
            if(A[mid]==target)
                return mid;
            else if(A[mid] > target)
                end = mid;
            else
                start = mid;
        }
        if(A[start]>=target)
            return start;
        else
            return start+1;

    }
};