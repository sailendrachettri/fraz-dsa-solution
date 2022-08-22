
/*
// BRUTE FORCE ALGORITHM

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int size = nums.size();
        int count = 0;
        
        for(int i = 0; i < size; i++)
        {
            int sum = 0;
            
            for(int j = i; j < size; j++)
            {
                sum += nums[j];
                
                if(sum == k)
                    count++;
            }
        }
        
        return count;
    }
}; */





// OPTIMIZED APPROACHED
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int size = nums.size();
        
        if(size == 0)
            return 0;
        
        unordered_map<int, int> myMap;
        int currSum = 0;
        int i = 0;
        int count = 0;
        
        while(i < size)
        {
            currSum += nums[i];
            
            if(currSum == k)
                count++;
            
            if(myMap.find(currSum-k) != myMap.end() )           
                count += myMap[currSum-k];
            
            myMap[currSum] += 1;
            i += 1;
        }
        
        return count;
    }
};