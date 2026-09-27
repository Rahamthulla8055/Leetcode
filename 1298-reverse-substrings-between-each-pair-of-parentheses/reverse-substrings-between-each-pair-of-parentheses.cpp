class Solution {
public:
string reverseParentheses(string s) {
        stack<int>x;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                x.push(i);
            }
            else if(s[i]==')') {
                int y = x.top();
                reverse(s.begin()+y+1,s.begin()+i);
                x.pop();
            }
        }
        string c="";
        for(char i : s){
            if(i!='(' && i!=')') c+=i;
        }
        return c;
    }
};