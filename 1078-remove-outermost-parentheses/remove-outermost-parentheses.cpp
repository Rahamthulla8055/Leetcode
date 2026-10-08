class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>a;
        string ch="";
        int c=0;
        for(char i:s){
            string x="";
            if(i=='(') c++;
            else  c--;
            a.push(i);
            if(c==0){
                a.pop();
                for(int i=a.size()-1;i>0;i--){
                    x=a.top()+x;
                    a.pop();
                }
                a.pop();
                ch+=x;
            }
        }
        return ch;
    }
};