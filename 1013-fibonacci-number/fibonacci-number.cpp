class Solution {
public:
    int c;
    int fib(int n) {
        if(n==0)  return 0;
        if(n==1 || n==2)  return 1;
        int a = 0;
        int b = 1;
        c=a+b;
        a=b;
        b=a;
        return fib(n-1)+fib(n-2);
    }
};