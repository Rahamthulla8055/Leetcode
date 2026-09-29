class Solution {
public:
vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>a;
        int r = 0, c=0;
        int n = mat.size();
        int m = mat[0].size();
        int up = 0;
        while(r<n && c<m){
            if(up==0){
                while(r>0 && c<m-1){
                    a.push_back(mat[r][c]);
                    r--;
                    c++;
                }
                a.push_back(mat[r][c]);
                if(c==m-1)  r++;
                else  c++;
            }
            else{
                while(c>0 && r<n-1){
                    a.push_back(mat[r][c]);
                    r++;
                    c--;
                }
                a.push_back(mat[r][c]);
                if(r==n-1) c++;
                else r++;
            }
            up=!up;
        }
        return a;
    }
};