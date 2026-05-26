class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mpp[256];
        for(int i=0;i<256;i++){
            mpp[i]=-1;
        }
        int l=0;
        int maxlen=0;
        int r=0;
        int n=s.length();
        while(r<n){
            if(mpp[s[r]]!=-1){
                l=max(mpp[s[r]]+1,l);
            }
            mpp[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
        
    }
};