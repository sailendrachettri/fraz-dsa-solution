/*

// BRUET FROCE - GOT TLE :(

class Solution {
    
    int findProduct(vector<int> &v, int ind)
    {
        int ans = 1;
        
        int n = v.size();
        for(int i = 0; i < n; i++)
        {
            if(!(i == ind) ){
                ans *= v[i];
            }
        }
        
        return ans;
    }
    
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans;
        
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            ans.push_back(findProduct(nums, i) );
        }
        
        return ans;
        
    }
};

*/