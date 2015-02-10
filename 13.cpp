class Solution {
public:
    int romanToInt(string s) {
        map<char,int> myDict;
        myDict['I'] = 1, myDict['i'] = 1;
        myDict['V'] = 5, myDict['v'] = 5;
        myDict['X'] = 10, myDict['x'] = 10;
        myDict['L'] = 50, myDict['l'] = 50;
        myDict['C'] = 100, myDict['c'] = 100;
        myDict['D'] = 500, myDict['d'] = 500;
        myDict['M'] = 1000, myDict['m'] = 1000;

        int result=0,j;
        for(int i=0;i<s.size();i++){
            j=i+1;
            int now = myDict[s[i]];
            if(j < s.size() && now<myDict[s[j]]){
                int next = myDict[s[j]];
                result += next-now;
                i++;
            }
            else{
                result += now;
            }
        }
        return result;
    }
};