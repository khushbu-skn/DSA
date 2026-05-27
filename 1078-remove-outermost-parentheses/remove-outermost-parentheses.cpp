class Solution {
public:
    string removeOuterParentheses(string s) {
        string p="";
        int n=s.length();
        if(n==0) return s;
        int cnt=1;
        int i=1;
        while(i<n){

            if(s[i]=='('){
                cnt+=1;
                if(cnt==0){
                    i=i+2;
                    cnt=1;
                }
                else{
                    p=p+'(';
                    i++;
                }
            }
            else if(s[i]==')'){
                cnt-=1;
                if(cnt==0){
                    i=i+2;
                    cnt=1;
                }
                else{
                    p=p+')';
                    i++;
                }
            }

        }
        return p;
    }
};