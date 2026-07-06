class Solution {
public:

    string encode(vector<string>& strs) {

        string s = "";

        for(auto str : strs){
            s = s + str;
            s = s + "e&";
        }

        return s;
    }

    vector<string> decode(string s) {

        vector<string> vec;
        string str = "";
        string end = "e&";

        for(int i = 0 ; i < s.size() ; i++){
            
            if((s[i] == end[0]) && (s[i+1] == end[1]) && i + 1 < s.size()){
                vec.push_back(str);
                str = "";
                i++;
                continue;
            }
            str += s[i];
        }
        return vec;
    }
};
