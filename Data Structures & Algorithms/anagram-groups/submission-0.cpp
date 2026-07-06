class Solution {
public:


    bool isZero(vector<int> vec){
        for(auto it: vec){
            if(it != 0) return false;
        }
        return true;
    }

    void findAndGroup(string s, vector<vector<string>>&adj){
        vector<int> letters(26, 0);
        for(auto it: s){
            letters[it -'a']++;
        }
        vector<int> test = letters;

        for(int i = 0 ; i < adj.size() ; i++){
            vector<string> it = adj[i];
            if(s.length() != it[0].length()){
                continue;
            }
            for(auto t : it[0]){
                test[t - 'a']--;
            }
            if(isZero(test)){
                adj[i].push_back(s);
                return;
            }else{
                test = letters;
            }
        }
        vector<string>new_group = {s};

        adj.push_back(new_group);
        return;


    }


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> adj;

        for(auto it : strs){
            findAndGroup(it, adj);
        }
        return adj;
    }
};
