class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mpps;
        map<char, int> mppt;

        for(auto it : s){
            mpps[it]++;
        }
        for(auto it : t){
            mppt[it]++;
        }
        if(mpps.size() != mppt.size()){
            return false;
        }

        for(int i = 0; i< mpps.size(); i++){
            if(mpps[i] != mppt[i]){
                return false;
            }
        }
        return true;
    }
};
