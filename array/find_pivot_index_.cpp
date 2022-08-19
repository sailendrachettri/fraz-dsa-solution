/*

1. calculate the prefix sum
2. assign prefix sum to right sum
3. in next for loop calcualte leftsum
    subtract nums[i] from right sum
    if leftsum and rightsum both are equal the return index


*/



class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int prefixSum = 0;
        int rightSum = 0;
        int leftSum = 0;
        int size = nums.size();
        
        // calculate prefix sum
        for(int i = 0; i < size; i++)
        {
            prefixSum += nums[i];
        }
        
        
        rightSum = prefixSum;
        
        for(int i = 0; i < size; i++)
        {
            leftSum += nums[i];
            
            if(leftSum == rightSum)
                return i;
            
            rightSum -= nums[i];
        }
        
        return -1;
        
    }
};