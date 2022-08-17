class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int val = nums[0];
        vector<int> ans;
        int size = nums.size();
        
        ans.push_back(val);
        
        for(int i = 1; i < size; i++)
        {
            
            val = val + nums[i];
            ans.push_back(val);
        }
        
        return ans;
        
    }
};