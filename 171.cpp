class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for(string::size_type i=0;i!=s.size();i++){
            int b = s[i] - 'A' + 1;
            result = pow(26,s.size()-i-1)*b+result;
        }
        return result;
    }
};