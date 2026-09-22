class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        int sizeVector_nums = nums.size();

        std::unordered_map<int, int> alreadySeen_nums;
        alreadySeen_nums.reserve(sizeVector_nums);

        for (int i = 0; i < sizeVector_nums; i++) {
            int complemento = target - nums[i];

            auto it = alreadySeen_nums.find(complemento);
            if (it != alreadySeen_nums.end()) {
                return {it->second, i};
            }

            alreadySeen_nums[nums[i]] = i;
        }

        return {};
    }
};