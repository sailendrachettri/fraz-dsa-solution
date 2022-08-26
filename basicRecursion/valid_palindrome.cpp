/*
class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> ans;
        
        
        for(int i = 0; i < s.size(); i++)
        {
            if( (s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z') or (s[i] >= '0' and s[i] <= '9') )
            {
                ans.push_back(tolower(s[i]) );
            }
        }
        
        vector<char> temp(ans);
        
        reverse(ans.begin(), ans.end() );
        
        if(ans == temp)
            return true;
        else 
            return false;
        
    }
};
*/

/*
// recursive solution

class Solution {
    
    vector<char> solve(string &s, int i, vector<char> &ans)
    {
        if(s.size() == i)
            return ans;
        
         if( (s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z') or (s[i] >= '0' and s[i] <= '9') )
            {
                ans.push_back(tolower(s[i]) );
            }
        
        return solve(s, i+1, ans);
    }
    
public:
    bool isPalindrome(string s) {
        vector<char> ans;
        solve(s, 0, ans);
        
        vector<char> temp(ans);
        
        reverse(ans.begin(), ans.end() );
        
        return ans==temp;
        
        
    }
};
*/