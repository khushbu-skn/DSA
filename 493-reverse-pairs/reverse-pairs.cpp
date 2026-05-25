class Solution {
public:
    
    void merge(vector<int>& arr, int low, int mid, int high,int& count) {
        // Create temp arrays
        vector<int> temp;
        int left = low, right = mid + 1;
        int i=low,j=mid+1;
        for(i;i<=mid;i++){
            while(j<=high && arr[i]>2LL*arr[j]){
                j++;
            }
            count+=j-mid-1;
        }

        // Merge two sorted halves
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);

        }
        // Copy remaining elements from left half
        while (left <= mid)
            temp.push_back(arr[left++]);

        // Copy remaining elements from right half
        while (right <= high)
            temp.push_back(arr[right++]);

        // Copy sorted elements back to original array
        for (int i = low; i <= high; i++){
            arr[i] = temp[i - low];
        }
    }

    // Recursive merge sort function
    void mergeSort(vector<int>& arr, int low, int high,int& count) {
        if (low >= high)
            return;

        // Find the middle index
        int mid = (low + high) / 2;

        // Recursively sort left half
        mergeSort(arr, low, mid,count);

        // Recursively sort right half
        mergeSort(arr, mid + 1, high,count);

        // Merge the two sorted halves
        merge(arr, low, mid, high,count);
    }
    int reversePairs(vector<int>& nums) {
        int count=0;
        mergeSort(nums,0,nums.size()-1,count);
        return count;
    }
};


