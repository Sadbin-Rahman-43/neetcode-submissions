class Solution {
   public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> v;
        sort(words.begin(), words.end(), [](auto& a, auto& b) { return a.size() < b.size(); });
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                int pos = words[j].find(words[i]);
                if (pos != string::npos) {
                    v.push_back(words[i]);
                    break;
                }
            }
        }
        return v;
    }
};