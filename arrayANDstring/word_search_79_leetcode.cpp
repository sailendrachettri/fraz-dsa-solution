class Solution {
public:
    
    bool search(int i, int j, int n, int m, vector<vector<char>>& board, string &word, int k)
    {
        if(k == word.size() )
            return true;
        
        if(i<0 or j<0 or i==n or j==m or board[i][j]!=word[k])
            return false;
        
        char ch = board[i][j];
        board[i][j] = '#';
        
        bool op1 = search(i+1, j, n, m, board, word, k+1);
        bool op2 = search(i, j+1, n, m, board, word, k+1);
        bool op3 = search(i-1, j, n, m, board, word, k+1);
        bool op4 = search(i, j-1, n, m, board, word, k+1);
        
        board[i][j] = ch;
        
        return (op1 or op2 or op3 or op4);
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int row = board.size();
        int col = board[0].size();
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(board[i][j] == word[0])
                {
                    if(search(i, j, row, col, board, word, 0) )
                        return true;
                }
            }
        }
        
        return false;
    }
};

// by fraz