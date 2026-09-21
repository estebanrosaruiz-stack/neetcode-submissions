class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        std::unordered_set<int> setOfNumbers;
        int sizeOfVector_nums = nums.size();

        for(int i = 0; i < sizeOfVector_nums ; i++){
            setOfNumbers.insert(nums[i]);
            
            if(setOfNumbers.size() != i+1) return true;
        }

        return false;
    }
};