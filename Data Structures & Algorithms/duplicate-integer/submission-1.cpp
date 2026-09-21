class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        std::unordered_set<int> setOfNumbers;
        int idx = 0;

        for(int x:nums){
            setOfNumbers.insert(x);
            idx++;
            
            if(setOfNumbers.size() != idx) return true;
        }

        return false;
    }
};