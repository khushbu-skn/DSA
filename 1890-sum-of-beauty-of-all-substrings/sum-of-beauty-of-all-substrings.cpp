class Solution {
public:
    int beautySum(string s) {

        long long ans=0;
        
        int n=s.length();
        for(int i=0;i<n;i++){
            unordered_map<int,int> freq;
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                long long maxi=INT_MIN;
                long long mini=INT_MAX;
                for( auto it: freq){
                    maxi=max(maxi,(long long)(it.second));
                    mini=min(mini,(long long)(it.second));
                }
                if(maxi!=0 && mini!=0){
                    ans+=(maxi-mini);
                }
            }
        }
        return ans;
    }
        
    
};