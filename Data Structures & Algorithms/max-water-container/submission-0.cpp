class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int len, bre;
        int currArea, maxArea = 0;
       
        for (int i = 0 ; i < n ; i++){
            for (int j = i+1 ; j < n ; j++){
                bre = j-i;
                len = min(heights[i], heights[j]);
                currArea = len*bre;
                if(currArea > maxArea){
                    maxArea = currArea;
                }
            }
        }

        return maxArea;

    }
};
