class Solution {
   public:
    void removeNonAlnum(string& s) {
        string str = "";
        for (auto it : s) {
            if (isalnum(it)) {
                str += tolower(it);
            }
        }
        s = str;
    }

    bool isPalindrome(string s) {
        string str = s;
        removeNonAlnum(str);
        int n = str.size();
        bool isPalindrome = true;

        for (int i = 0; i < n / 2; i++) {
                if(str[i] != str[n-i-1]){
                    isPalindrome = false;
                    break;
                } 
            }

        return isPalindrome;
    }
};
