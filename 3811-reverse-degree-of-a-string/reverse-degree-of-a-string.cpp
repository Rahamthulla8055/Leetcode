class Solution {
public:
    int reverseDegree(string s) {
        int n=0;
        for(int i=0;s[i]!='\0';i++){
            n+=(26-(s[i]-'a'))*(i+1);
        }
        return n;
    }
};