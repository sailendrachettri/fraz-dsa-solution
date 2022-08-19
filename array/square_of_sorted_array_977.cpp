/*
1. create an answer vector
2. create a function that returns sqare
3. iterate till n and push_back into answer array
*/


class Solution {
    
    int findIndex(int num)
    {
        return num*num;
    }
    
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans;
        
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            ans.push_back(findIndex(nums[i]) );
        }
        
        sort(ans.begin(), ans.end() );
        
        return ans;
        
    }
};