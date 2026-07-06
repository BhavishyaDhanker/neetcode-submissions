class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> num;

        for(auto it: nums){
            num.insert(it);
        }

        if(nums.size() == num.size()){
            return false;
        }else return true;
    }
};