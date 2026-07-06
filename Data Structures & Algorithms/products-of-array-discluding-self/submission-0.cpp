class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixPdt(n, 1);
        vector<int> suffixPdt(n, 1);
        vector<int> pdtExceptSelf(n);

        for (int i = 1; i < n; i++) {
            prefixPdt[i] = nums[i - 1] * prefixPdt[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suffixPdt[i] = nums[i + 1] * suffixPdt[i + 1];
        }
        for (int i = 0; i < n; i++) {
            pdtExceptSelf[i] = prefixPdt[i] * suffixPdt[i];
        }

        return pdtExceptSelf;
    }
};
