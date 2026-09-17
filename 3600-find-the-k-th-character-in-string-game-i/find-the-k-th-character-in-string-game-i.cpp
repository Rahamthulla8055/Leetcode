class Solution {
public:
    char c;
    void recurs(int k,string w,string s){
        if(w.size()>=k){
            c=w[k-1];
            return;
        }
        int n = s.size();
        for(int i=0;i<n;i++){
            s+=static_cast<char>(s[i]=='z'?'a':s[i]+1);
        }
        w+=s;
        return recurs(k,w,s);
    }
    char kthCharacter(int k) {
        string w = "ab";
        string s = "b";
        recurs(k,w,s);
        return c;
    }
};