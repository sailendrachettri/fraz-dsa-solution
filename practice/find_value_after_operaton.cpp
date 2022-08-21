class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value = 0;
        int size = operations.size();
        
        for(int i = 0; i < size; i++)
        {
            if(operations[i] == "--X")
                --value;
            
            if(operations[i] == "X--")
                value--;
            
            if(operations[i] == "++X")
                ++value;
            
            if(operations[i] == "X++")
                value++;
        }
        
        return value;
    }
};