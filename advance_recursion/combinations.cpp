class Solution {
    
    void help(int i, int n, int k, vector<int> &subset, vector<vector<int> > &ans)
    {
        // base condition
        if(i > n)
        {
            if(k == 0)
                ans.push_back(subset);
            
            return ;
        }
        
        // Take the ith element
        subset.push_back(i);
        help(i+1, n, k-1, subset, ans);
        
        // skip the ith element
        subset.pop_back();
        help(i+1, n, k, subset, ans);
        
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> subset;
        vector<vector<int> > ans;
        help(1, n, k, subset, ans);
        
        return ans;
        
    }
};

/*
// optimized

class Solution {
    
    void help(int i, int n, int k, vector<int> &subset, vector<vector<int> > &ans)
    {
        // base condition
         if(k == 0)
         {
            ans.push_back(subset);            
            return ;
        }
        
        if(k > n - i + 1)
            return;
        
        if(i > n)
            return ;
        
        // Take the ith element
        subset.push_back(i);
        help(i+1, n, k-1, subset, ans);
        
        // skip the ith element
        subset.pop_back();
        help(i+1, n, k, subset, ans);
        
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> subset;
        vector<vector<int> > ans;
        help(1, n, k, subset, ans);
        
        return ans;
        
    }
};
*/

// by fraz