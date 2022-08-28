class Solution {
    
    bool compare(vector<int> &selected, string &currStr)
    {
        vector<int> selfCheck(26, 0);
        for(int i = 0; i < currStr.size(); i++)
        {
            if(selfCheck[currStr[i] - 'a'] == 1)
                return false;
            
            selfCheck[currStr[i] - 'a'] = 1;
        }
        
        for(int i = 0; i < currStr.size(); i++)
        {
            if(selected[currStr[i] - 'a'] == 1)
                return false;
        }
        
        return true;            
    }
    
    int help(int i, vector<string> &arr, vector<int> &selected, int len)
    {
        // base condition
        if(i == arr.size() )
            return len;
        
        string currStr = arr[i];
        if(compare(selected, currStr) == false)
        {
            return help(i+1, arr, selected, len);
        }
        else
        {
            // pick
            for(int j = 0; j < currStr.size(); j++)
            {
                selected[currStr[j] - 'a'] = 1;
            }
            len += currStr.size();
            
            int op1 = help(i+1, arr, selected, len);
            
            // skip
            for(int j = 0; j < currStr.size(); j++)
            {
                selected[currStr[j] - 'a'] = 0;
            }
            len -= currStr.size();
            
            int op2 = help(i+1, arr, selected, len);
            
            return max(op1, op2);
        }        
    }
    
public:
    int maxLength(vector<string>& arr) {
        
        vector<int> selected(26, 0);
        return help(0, arr, selected, 0);
        
    }
};

// by fraz