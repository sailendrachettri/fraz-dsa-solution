class Solution {
    void help(int i, vector<int> &arr, int B, int sumTillNow, vector<int> &subset, vector<vector<int> > &ans)
    {
        // base condition
        
        if(sumTillNow == B)
        {
            ans.push_back(subset);
            return ;
        }
        
        if(sumTillNow > B)
            return ;
        
        if(i >= arr.size() )
            return ;
        
        // skip the ith element
        help(i+1, arr, B, sumTillNow, subset, ans);
        
        // take the ith element
        sumTillNow += arr[i];
        subset.push_back(arr[i]);
        help(i, arr, B, sumTillNow, subset, ans);
        
        // backtracking steps
        sumTillNow -= arr[i];
        subset.pop_back();
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     
        int sumTillNow = 0;
        vector<int> subset;
        vector<vector<int> > ans;
        help(0, candidates, target, sumTillNow, subset, ans);
        
        return ans;        
    }
};

// by frax







