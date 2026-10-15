class Solution {
   public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        unordered_map<string, char> r;
        istringstream iss(s);
        string word;
        for (int i = 0; i < pattern.size(); i++) {
            if (!(iss >> word)) return false;
            char c = pattern[i];
            if (m.count(c) && m[c] != word) return false;
            if (r.count(word) && r[word] != c) return false;
            m[c] = word;
            r[word] = c;
        }
        return !(iss >> word);
    }
};