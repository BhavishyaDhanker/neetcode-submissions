class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;
        vector<int> ans;
        for(auto it : nums){
            mpp[it]++;
        }
        
        vector<pair<int, int>> mppSort(mpp.begin() , mpp.end());

        sort(mppSort.begin(), mppSort.end() , [](const auto&a, const auto&b){
            return a.second > b.second;
        });

        for(int i = 0 ; i< k; i++){
            ans.push_back(mppSort[i].first);
        }

        return ans;
    }
};
