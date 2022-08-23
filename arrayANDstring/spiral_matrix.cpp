class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row * col;
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;
        
        while(count < total)
        {
            // print starting row
            for(int index = startingCol; count < total and index <= endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            
            startingRow++;
            
            // print ending column
            for(int index = startingRow; count < total and index <= endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            
            endingCol--;
            
            // print ending row
            for(int index = endingCol; count < total and index >= startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            
            endingRow--;
            
            // print starting column
            for(int index = endingRow; count < total and index >= startingRow; index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            
            startingCol++;
        }
        
        return ans;
    }
};





