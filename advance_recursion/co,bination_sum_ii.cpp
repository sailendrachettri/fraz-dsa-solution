class Solution {
    
    void help(int i, vector<int> &arr, int n, vector<int> &subset, vector<vector<int> > &powerSet, int sum, int target)
    {
        if(sum == target)
        {
            powerSet.push_back(subset);
            return ;
        }
        
        if(sum > target)
            return ;
        
        if(i == n)
            return ;
        
         // pick
        subset.push_back(arr[i]);
        sum += arr[i];
        
        help(i+1, arr, n, subset, powerSet, sum, target);
        subset.pop_back();
        sum -= arr[i];
        
        // skip
        while(i+1 < arr.size() and arr[i] == arr[i+1]) 
            i++;
        help(i+1, arr, n, subset, powerSet, sum, target);
        
    }
    
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      
        vector<int> subset;
        vector<vector<int> > powerSet;
        int sum = 0;
        
        sort(candidates.begin(), candidates.end() );
        
        int n = candidates.size();
        help(0, candidates, n, subset, powerSet, sum, target);
        
        return powerSet;
        
    }
};

// by fraz