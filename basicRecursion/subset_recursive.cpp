class Solution {
    
    vector<vector<int> > helper(vector<int> &v, int i)
    {
        if(i >= v.size() )
            return {{}};
        
        
        vector<vector<int> > partialAns = helper(v, i+1);
        vector<vector<int> > ans;
        
        for(auto x : partialAns)
        {
            ans.push_back(x);
        }
        
        for(auto x : partialAns)
        {
            x.push_back(v[i]);
            ans.push_back(x);
        }
        
        return ans;
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        return helper(nums, 0);
    }
};

// by fraz