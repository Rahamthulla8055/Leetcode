class Solution {
public:
    vector<string>v;
    void solve(map<int,string>a,string d,string s,int n,int i){
        if(i>=n){
            v.push_back(s);
            return;
        }
        for(auto j:a[d[i]-'0']){
            s.push_back(j);
            solve(a,d,s,n,i+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string d) {
        map<int,string>a;
        string s="";
        a[2]="abc";
        a[3]="def";
        a[4]="ghi";
        a[5]="jkl";
        a[6]="mno";
        a[7]="pqrs";
        a[8]="tuv";
        a[9]="wxyz";
        solve(a,d,s,d.size(),0);
        return v;
    }
};