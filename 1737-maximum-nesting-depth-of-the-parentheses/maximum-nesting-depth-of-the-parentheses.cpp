class Solution {
public:
    int maxDepth(string s) {
        int x=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                c++;
                x=max(x,c);
            }
            else if(s[i]==')'){
                c--;
            }
        }
        return x;
    }
};