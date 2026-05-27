class Solution {
public:
    bool isAnagram(string s, string t) {
        int mpp1[256]={0};
        int m=s.length(),n=t.length();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
            mpp1[t[i]]--;
        }
        for(int j=0;j<256;j++){
            if(mpp1[j]!=0) return false;
        }
        return true;
    }
};