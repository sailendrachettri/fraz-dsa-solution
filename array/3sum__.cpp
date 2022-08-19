class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int> > ans;
        
        sort(nums.begin(), nums.end() );
        
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            int a = nums[i];
            int t = -a;
            
            int start = i+1; 
            int end = size-1;
            
            while(start < end)
            {
                if(nums[start] + nums[end] == t)
                {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    
                    while(start < end and nums[start] == nums[start+1])
                        start++;
                    
                    while(start < end and nums[end] == nums[end-1])
                        end--;
                    
                    start++;
                    end--;
                }
                else if(nums[start] + nums[end] > t)
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
            
            while(i+1 < size and nums[i+1] == nums[i])
                i++;
        }
        
        return ans;
        
    }
};