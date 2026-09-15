class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>a;
        for(int i=1;i<=n;i++) a.push_back(i);
        int i=0;
        while(a.size()!=1){
            i+=k-1;
            i%=a.size();
            a.erase(a.begin()+i);
        }
        return a[0];
    }
};