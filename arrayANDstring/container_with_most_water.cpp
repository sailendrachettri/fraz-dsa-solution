class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int startHeight = 0;
        int endHeight = height.size() - 1;
        
        int maxVal = 0;
        while(startHeight < endHeight)
        {
            int leftHeight = height[startHeight];
            int rightHeight = height[endHeight];
            
            int minHeight = min(leftHeight, rightHeight);
            int len = endHeight - startHeight;
            
            int currArea = minHeight * len;
            maxVal = max(maxVal, currArea);
            
            if(leftHeight < rightHeight)
                startHeight++;
            else
                endHeight--;
        }
        
        return maxVal;
        
    }
};

// solution by codebix