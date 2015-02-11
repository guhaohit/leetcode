class Solution {
public:
    int maxSubArray(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ret = INT_MIN;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = max(sum + A[i], A[i]);
            ret = max(sum, ret);
        }

        return ret;
    }
};