class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;

        istringstream iss(s);
        string word;
        size_t i = 0;

        while(iss >> word)
        {
            if(i == pattern.size())
                return false;

            char c = pattern[i++];

            auto [cw_it,_] = char_to_word.emplace(c, word);
            auto [wc_it,__] = word_to_char.emplace(word, c);

            if(cw_it->second != word || wc_it->second != c)
                return false;
        }

        return i == pattern.size();
    }
};


// class Solution {
//    public:
//     bool wordPattern(string pattern, string s) {
//         unordered_map<char, string> m;
//         unordered_map<string, char> r;
//         istringstream iss(s);
//         string word;
//         for (int i = 0; i < pattern.size(); i++) {
//             if (!(iss >> word)) return false;
//             char c = pattern[i];
//             if (m.count(c) && m[c] != word) return false;
//             if (r.count(word) && r[word] != c) return false;
//             m[c] = word;
//             r[word] = c;
//         }
//         return !(iss >> word);
//     }
// };