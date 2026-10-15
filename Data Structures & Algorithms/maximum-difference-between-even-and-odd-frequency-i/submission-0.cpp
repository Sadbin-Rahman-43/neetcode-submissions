class Solution {
   public:
    int maxDifference(string s) {
        int arr[26] = {0};
        int maxodd = 0, mineven = 1000000000;
        for (int i = 0; i < s.size(); i++) arr[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            if (arr[i] != 0)
                if (arr[i] % 2 != 0)
                    maxodd = max(maxodd, arr[i]);
                else
                    mineven = min(mineven, arr[i]);

        return maxodd - mineven;
    }
};