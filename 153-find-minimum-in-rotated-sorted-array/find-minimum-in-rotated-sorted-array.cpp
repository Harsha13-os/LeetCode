class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0, high = arr.size()-1;
        int ans = INT_MAX;
        while(low<=high){
            int mid = (low + high)/2;
            // left half sorted
            if(arr[low]<=arr[mid]){
                ans = min(ans,arr[low]);
                low = mid+1;
            }
            // right half sorted
            else if(arr[mid]<arr[high]){
                ans = min (ans, arr[mid]);
                high = mid-1;
            }
        }
        return ans;
    }
};