class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n -1;
        int area = 0;

        while(l < r){
            area = max(area , min(heights[l] , heights[r])*(r-l));


            // move the pointer which is currently pointing to a smaller bar
            // as that would insure all the possible maxAreas.
            if(heights[l] > heights[r]){
                r--;
            }else{
                l++;
            }
        }
        return area;
    }
};
