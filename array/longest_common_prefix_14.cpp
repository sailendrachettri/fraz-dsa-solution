/*
// __________________________________APPROACH 1__________________________________

Two for loop is needed 
    - Outer for loop is traverse from 0 to length of the strs[0].size();
    - Inner foor loop checks for all other strings

class Solution {
public:
    string ans = "";
    
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        
        for(int i = 0; i < strs[0].length(); i++)
        {
            char ch = strs[0][i];
            bool match = true;
            
            for(int j = 1; j < size; j++)
            {
                if(strs[j].length() < i or ch != strs[j][i]){
                    match = false;
                    break;
                }
            }
            
            if(match == false)
            {
                break;
            }
            else
            {
                ans.push_back(ch);
            }
        }
        
        return ans;
    }
};
*/