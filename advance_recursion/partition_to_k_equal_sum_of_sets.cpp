class Solution {
    
    bool help(int i, int bucketNum, int bucketSum, int reqSum, int K, vector<int> &nums, vector<int> &alreadyPicked)
    {
        // base case
        if(bucketNum == K+1)
            return true;
        
        if(bucketSum == reqSum)
            return help(0, bucketNum+1, 0, reqSum, K, nums, alreadyPicked);
        
        if(bucketSum > reqSum)
            return false;
        
        if(i >= nums.size() )
            return false;
        
        
        if(alreadyPicked[i] == 1)
            return help(i+1, bucketNum, bucketSum, reqSum, K, nums, alreadyPicked);
        else
        {
            // pick
            bucketSum += nums[i];
            alreadyPicked[i] = 1;
            
            bool op1 = help(i+1, bucketNum, bucketSum, reqSum, K, nums, alreadyPicked);
            
            // skip
            bucketSum -= nums[i];
            alreadyPicked[i] = 0;
            
            bool op2 = help(i+1, bucketNum, bucketSum, reqSum, K, nums, alreadyPicked); 
            
            return (op1 or op2);            
        }
    }
    
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> alreadyPicked(n, 0);
        
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += nums[i];
        
        if(sum % k != 0)
            return false;
        
        int reqSum = sum / k;
        
        return help(0, 1, 0, reqSum, k, nums, alreadyPicked);
            
    }
};

// by fraz - TLE (dp required)