class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0, r=n-1;
        int maxArea = 0;
        while(r>l){
            int area = (r-l) * (min(height[r],height[l]));
            maxArea = max(maxArea, area);
            if(height[r]<height[l]){
                r--;
            }
            else l++;
        }
        return maxArea;
    }
};