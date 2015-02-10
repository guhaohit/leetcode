class Solution {
public:
    int singleNumber(int A[], int n) {
        int one=0,two=0,three=0;
        for(int i=0;i<n;i++){
            three = A[i] & two;
            two = two | A[i] & one;
            one = one | A[i];

            two = two & ~three;
            one = one & ~three & ~two;
        }
        return one;
    }
};