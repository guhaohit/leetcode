class Solution {
public:
    int maxSubArray(int A[], int n) {
        return maxSub(A,0,n-1);
    }
    int maxSub(int A[],int start,int end){
        if(end==start)
            return A[start];
        int mid=(end+start)/2;
        int sub1=maxSub(A,start,mid);
        int sub2=maxSub(A,mid+1,end);
        int sub3=A[mid];
        int temp=sub3;
        for(int i=mid-1;i>=start;i--){
            temp += A[i];
            if(temp>sub3)
                sub3 = temp;
        }
        temp = sub3;
        for(int j=mid+1;j<=end;j++){
            temp += A[j];
            if(temp>sub3)
                sub3 = temp;
        }
        return max(sub3,max(sub1,sub2));
    }
};