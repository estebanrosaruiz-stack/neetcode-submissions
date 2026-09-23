class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        for (int n : nums) {
            freq[n]++;
        }

        int n = nums.size();
        vector<vector<int>> buckets(n + 1);   
        for (auto& [num, f] : freq) {
            buckets[f].push_back(num);
        }

        vector<int> result;
        for (int f = n; f >= 1; f--) {
            for (int num : buckets[f]) {
                result.push_back(num);
                if (result.size() == k) return result;
            }
        }
        return result;
    }
};