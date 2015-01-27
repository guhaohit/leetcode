class Solution {
public:
    string convertToTitle(int n) {
        if(n<1)
            return "";
        else{
            string result="";
            while(n){
                n--;
                char a='A'+n%26;
                result = a + result;
                n = n/26;
            }
        return result;
        }
    }
};