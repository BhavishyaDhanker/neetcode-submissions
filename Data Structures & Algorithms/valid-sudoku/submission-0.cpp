class Solution {
   public:
    bool hasDuplicates(vector<char> line) {
        vector<int> num(10, 0);
        for (auto it : line) {
            if (it == '.') continue;
            num[it - '0']++;
        }

        for (auto it : num) {
            if (it > 1) return true;
        }

        return false;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
       
        vector<vector<char>> vertical;
        vector<vector<char>> blocks;
        vector<char> line(9);

        vector <int> x = {1,4,7};
        vector <int> y = {1,4,7};

        vector <int> x_ = {0,1,-1};
        vector <int> y_ = {0,1,-1};

        


        for (int j = 0; j < 9; j++) {
            for (int i = 0; i < 9; i++) {
                line[i] = board[i][j];
            }
            vertical.push_back(line);
        }

        for(auto xc : x){
            for(auto yc : y){
                vector<char> block;
                for(auto x__ : x_){
                    for(auto y__ : y_){
                        block.push_back(board[xc + x__][yc + y__]);
                    }
                }
                blocks.push_back(block);

            }
        }


        for (auto it : board) {
            if (hasDuplicates(it)) {
                return false;
            }
        }

        for (auto it : vertical) {
            if (hasDuplicates(it)) {
                return false;
            }
        }

        for (auto it : blocks) {
            if (hasDuplicates(it)) {
                return false;
            }
        }
        
        return true;
    }
};
