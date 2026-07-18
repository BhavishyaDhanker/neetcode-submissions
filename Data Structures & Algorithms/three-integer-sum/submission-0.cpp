class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set < vector<int>> solnIndices;
        int n = nums.size();
        vector <int> triplet;

        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                for (int k = j+1; k < n; k++) {
                    if(nums[i] + nums[j] + nums[k] == 0){
                        triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin() , triplet.end());
                        solnIndices.insert(triplet);
                    }
                }
            }
        }

        vector<vector<int>> soln(solnIndices.begin() , solnIndices.end());
        return soln;
    }
};
