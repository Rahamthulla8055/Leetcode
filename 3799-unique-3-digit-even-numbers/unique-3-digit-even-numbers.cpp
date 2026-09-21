class Solution {
public:
    int c=0;
    vector<pair<int,bool>>used;
    string s="";
    void even(vector<int>&d){
        if(s[0]!='0' && s.size()==3){
            int a = stoi(s);
            if(a%2==0)   c++;
            return;
        }
        for(int i=0;i<d.size();i++){
            if(used[i].second) continue;
            if(i>0 && d[i]==d[i-1] && !used[i-1].second)  continue;
            s+=to_string(d[i]);
            used[i].second=true;
            even(d);
            s.pop_back();
            used[i].second=false;
        }
    }
    int totalNumbers(vector<int>& d) {
        sort(d.begin(),d.end());
        for(int i : d){
            used.push_back({i,false});
        }
        even(d);
        return c;

    }
};