class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string>& strs) {
        std::vector<vector<string>> solutioned_groupAnagrams;
        std::unordered_map<std::string, std::vector<std::string>> groupedBy_sortedWord;
        int sizeVector_strs = strs.size();
        for (int i = 0; i < sizeVector_strs; i++) {
            std::string sortedWord = strs[i];
            std::sort(sortedWord.begin(), sortedWord.end());
            groupedBy_sortedWord[sortedWord].push_back(strs[i]);
        }
        solutioned_groupAnagrams.reserve(groupedBy_sortedWord.size());
        for (const auto& group : groupedBy_sortedWord) {
            solutioned_groupAnagrams.push_back(group.second);
        }
        return solutioned_groupAnagrams;
    }
};