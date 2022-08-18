class Solution {
    
    bool isPalindrome(string str, int i, int j)
    {
        while(i < j)
        {
            if(str.at(i) == str.at(j) )
            {
                i++; j--;
            }
            else 
                return false;
        }
        
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j)
        {
            if(s.at(i) == s.at(j) )
            {
                i++; j--;
            }
            else 
                return isPalindrome(s, i+1, j) or isPalindrome(s, i, j-1);
        }
        
        return true;
        
    }
};