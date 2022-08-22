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





// OPTIMIZED SOLUTION
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int p = 1;
        int size = nums.size();
        vector<int> ans(size, 1);
        
        for(int i = 0; i < size; i++)
        {
            ans[i] = p;
            p = p * nums[i];
        }
        
        p = 1;
        
        for(int i = size-1; i >= 0; i--)
        {
            ans[i] *= p;
            p = p * nums[i];
        }
        
        return ans;
    }
};

// ONLY ONE FOR LOOP
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int p1 = 1;
        int p2 = 1;
        int size = nums.size();
        vector<int> ans(size, 1);
        
        for(int i = 0; i < size; i++)
        {
            ans[i] *= p1;
            p1 = p1 * nums[i];
            
            int j = size - i - 1;
            
            ans[j] *= p2;
            p2 = p2 * nums[j];
        }
        
        return ans;
    }
};
*/