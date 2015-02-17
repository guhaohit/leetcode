class Solution {
public:
    void sortColors(int A[], int n) {
        int zero=0;
        int two=n-1;
        int i=0;
        while(i<n){
            if(A[i]==0){
                if(i==zero)
                    i++;
                else
                    swap(A[i],A[zero]);
                zero++;
            }
            else if(A[i]==2){
                if(i>=two)
                    return;
                swap(A[i],A[two]);
                two--;
            }
            else{
                i++;
            }
        }
    }
    void swap(int &a,int &b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
};