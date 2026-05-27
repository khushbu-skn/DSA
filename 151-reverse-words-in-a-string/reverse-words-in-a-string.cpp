class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int i=0;
        string ans="";
        while(i<n){
            if(s[i]!=' '){
                string p="";
                while(i<n && s[i]!=' '){
                    p=p+s[i];
                    i++;
                }
            if(ans == ""){
                ans = p;
            }
            else{
                ans = p + ' ' + ans;
            }
            }
            while(i<n && s[i]==' ') i++;
           
        }
        return ans;
        
    }
};