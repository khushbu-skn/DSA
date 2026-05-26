class Solution {
public:
    int atost(vector<int>& nums, int goal) {
        if(goal<0) return 0;
        int r=0,l=0,sum=0,len=0,n=nums.size();
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum=sum-nums[l];
                l++;
            }
            len+=(r-l+1);
            r++;
        }
        return len;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return atost(nums,goal)-atost(nums,goal-1);

        }
    

};