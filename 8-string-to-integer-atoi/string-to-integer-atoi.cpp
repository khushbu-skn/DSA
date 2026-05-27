class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int i=0;
        int n=s.length();
        int sign=1;
        while(i<n && s[i]==' ') i++;
        if(i<n && s[i]=='+' || s[i]=='-'){
            if(s[i]=='-') sign=-1;
            i++;
        }
        while(i<n && s[i]=='0') i++;
        while(i<n && isdigit(s[i])){
           int digit = s[i] - '0';

            if(ans > (INT_MAX - digit) / 10) {

                if(sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            ans=(ans*10LL)+(s[i]-'0');
            i++;
        }
        ans*=sign;
        if (ans<INT_MIN) return INT_MIN;
        if(ans>INT_MAX) return INT_MAX;
        return ans; 
    }
};