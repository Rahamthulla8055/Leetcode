class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kn) {
        string a="";
        unordered_map<string,string>mp;
        for(auto p:kn){
            mp[p[0]]=p[1];
        }
        for(int i=0;i<s.size();i++){
            string c="";
            if(s[i]=='('){
                i++;
                while(s[i]!=')'){
                    c.push_back(s[i]);
                    i++;
                }
                string x = "";
                if(mp.find(c)!=mp.end())  x=mp[c];
                if(x.size()!=0)  a+=x;
                else a+='?';
            }
            else{
                a+=s[i];
            }
        }
        return a;
    }
};