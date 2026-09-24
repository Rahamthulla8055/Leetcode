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
        int c=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                if(nums[i]==i)  c=min(c,i);
            }
            else{
                if(dbl(nums[i])==i)     c=min(c,i);
            }
        }
        if(c==INT_MAX)     return -1;
        return c;
    }
};