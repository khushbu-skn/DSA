class Solution {
public:
    double Power(double x, long long n){
        if(n==0) return 1;
        int half=n/2;
        if(n%2==0){
            n=half;
            x=x*x;
            return Power(x,n);
        }
        else{
            n=n-1;
            return x*Power(x,n);
        }
    }
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0){
            long long N=n;
            x=1/x;
            
            return (Power(x,-N));
        }
        
        return Power(x,n);
        
    }
};