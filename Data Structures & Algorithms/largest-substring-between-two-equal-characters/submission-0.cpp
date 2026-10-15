class Solution {
   public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size(), m = -1;
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                if (s[i] == s[j]) {
                    m = max(m, j - i - 1);
                    break;
                }
            }
        }
        return m;
    }
};