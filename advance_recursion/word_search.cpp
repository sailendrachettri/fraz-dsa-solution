class Solution {
    
    private:
        bool helper(vector<vector<char>>& board, string word, int i, int j, int n, int m, int k)
        {
            if(k >= word.size() )
                return true;
            
            if(i < 0 or i >= n or j < 0 or j >= m or board[i][j] == '.' or word[k] != board[i][j])
                return false;
            
            if(word.size() == 1 and word[k] == board[i][j])
                return true;
            
            board[i][j] = '.';
            bool temp = false;
            
            int x[4] = {0, 0, -1, 1};
            int y[4] = {-1, 1, 0, 0};
            
            for(int index = 0; index < 4; index++)
            {
                temp = temp or helper(board, word, i+x[index], j+y[index], n, m, k+1);
            }
            
            board[i][j] = word[k];
            
            return temp;
        }
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();
        
        if(n == 0)
            return false;
        
        if(word.size() == 0)
            return false;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(word[0] == board[i][j])
                    if(helper(board, word, i, j, n, m, 0) )
                        return true;
            }
        }
        
        return false;        
    }
};

// by Nishand (code in 10)