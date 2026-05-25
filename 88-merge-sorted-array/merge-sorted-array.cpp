class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        n=nums1.size();
        m=nums2.size();

        int p=n-m-1,q=n-1,r=m-1;
        while(r>=0 && p>=0){
            if(nums2[r]>nums1[p]){
                nums1[q]=nums2[r];
                q--,r--;
            }
            
            else{
                swap(nums1[p],nums1[q]);
                p--,q--;
            }
        }
        while(r>=0){
            nums1[q]=nums2[r];
            q--,r--;

        }
        
    }
};