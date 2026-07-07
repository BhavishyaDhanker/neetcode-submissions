class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> numsCopy = nums;
        int n = nums.size();

        if(n <= 0) return 0;

        sort(numsCopy.begin(), numsCopy.end());

        int maxSize = 0;
        int size = 1;

        for (int i = 0; i < n - 1; i++) {
            if (numsCopy[i] == numsCopy[i + 1]) {
                continue;
            } else if (numsCopy[i] + 1 == numsCopy[i + 1]) {
                size++;
            } else {
                if (size > maxSize) {
                    maxSize = size;
                }
                size = 1;
            }
        }
 

        if (size > maxSize) {
            maxSize = size;
        }

        return maxSize;
    }
};
