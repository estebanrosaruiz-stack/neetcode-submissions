class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        
        if(s.size() != t.size()) return false;

        std::unordered_map<char, int> count;

        count.reserve(s.size());

        for(char c : s) ++count[c];

        for(char c : t){

            if(--count[c] < 0) return false;
        }

        return true;
    }
};