class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board.size();

        cout << "Check1" << endl;
        for(int i = 0; i < row; i++){
            bool rowCheck[10] = {false};
            for(int j = 0; j < col; j++){
                if(board[i][j] == '.'){
                    continue;
                }else{
                    if(rowCheck[board[i][j] - '0']) {
                        return false;
                    }
                    rowCheck[board[i][j] - '0'] = true;
                }
            }
            cout << endl;
        }

        cout << "Check2" << endl;
        for(int i = 0; i < col; i++){
            bool colCheck[10] = {false};
            for(int j = 0; j < row; j++){
                if(board[j][i] == '.'){
                    continue;
                }else{
                    if(colCheck[board[j][i] - '0']) return false;
                    colCheck[board[j][i] - '0'] = true;
                }
            }
        }

        cout << "Check3" << endl;
        for(int k = 0; k < 3; k++){
            for(int l = 0; l < 3; l++){
                bool sqCheck[10] = {false};
                for(int i = k*3; i < k*3+3; i++){
                    for(int j = l*3; j < l*3+3; j++){
                        if(board[i][j] == '.'){
                            continue;
                        }else{
                            if(sqCheck[board[i][j] - '0']) return false;
                            sqCheck[board[i][j] - '0'] = true;
                        }
                    }
                }
            }
        }

        return true;
    }
};
