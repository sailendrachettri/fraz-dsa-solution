class RandomizedSet {
    
    vector<int> _nums;
    unordered_map<int, int> _positions;
    
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(_positions.find(val) != _positions.end() )
            return false;
        
        _nums.push_back(val);
        
        _positions.insert({val, _nums.size()-1});
        return true;
    }
    
    bool remove(int val) {
        if(_positions.find(val) == _positions.end() )
            return false;
        
        int pos = _positions[val];
        
        _nums[pos] = _nums[_nums.size()-1];
        _positions[_nums[pos] ] = pos;        
        
        _nums.pop_back();
        _positions.erase(val);
        
        return true;
    }
    
    int getRandom() {
        
        return _nums[rand() % _nums.size()];
    }
};