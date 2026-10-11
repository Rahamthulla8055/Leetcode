class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int x=*nums.begin();
        int n=x*x;
        int a=nums.size();
        for(int i=1;i<=a;i++){
            if(a%(i+1)==0){
                n+=(nums[i])*(nums[i]);
            }
        }
        return n;
    }
};