class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        vector<int> temp=intervals[0];
        for(int i=1; i<n;i++){
            if(intervals[i][0]<=temp[1]){
                temp={min(temp[0],intervals[i][0]),max(intervals[i][1],temp[1])};
            }
            else{
                if(!temp.empty()){
                    v.push_back(temp);
                }
                temp=intervals[i];
            }
        }
        if(!temp.empty()){
            v.push_back(temp);
        }
        return v;
    }
};