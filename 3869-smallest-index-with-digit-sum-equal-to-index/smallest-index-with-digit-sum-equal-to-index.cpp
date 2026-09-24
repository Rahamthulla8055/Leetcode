class Solution {
public:
int dbl(int n){
    int c=0;
    while(n!=0){
        int r=n%10;
        c+=r;
        n=n/10;
    }
    return c;
}
    int smallestIndex(vector<int>& nums) {
        vector<int>a;
        int c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                if(nums[i]==i)  a.push_back(i);
            }
            else{
                if(dbl(nums[i])==i)     a.push_back(i);
            }
        }
        if(a.size()==0)     return -1;
        c=*min_element(a.begin(),a.end());
        return c;
    }
};