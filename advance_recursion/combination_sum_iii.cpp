class Solution {
    
    void help(int i, int k, int sumTillNow, int n, vector<int> &subset, vector<vector<int> > &ans)
    {
        // base cond^n        
        if(k < 0)
            return ;
        
        if(sumTillNow == n)
        {
            if(k == 0)
                ans.push_back(subset);
            
            return ;
        }
        
        if(i == 10)
            return ;
        
        
        // pick ith element
        sumTillNow += i;
        subset.push_back(i);
        help(i+1, k-1, sumTillNow, n, subset, ans);
        
        // backtrack
        sumTillNow -= i;
        subset.pop_back();
        
        // skip ith element
        help(i+1, k, sumTillNow, n, subset, ans);
    }
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> subset;
        vector<vector<int> > ans;
        int sumTillNow = 0;
        help(1, k, sumTillNow, n, subset, ans);
        
        return ans;
        
    }
};

// by fraz