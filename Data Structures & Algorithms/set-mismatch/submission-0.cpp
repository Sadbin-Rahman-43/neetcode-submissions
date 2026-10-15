class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        long long s = 0, s2 = 0;
        for (auto& x : nums) {
            s  += x;
            s2 += (long long)x * x;
        }
        long long e  = (long long)n * (n + 1) / 2;
        long long e2 = (long long)n * (n + 1) * (2LL * n + 1) / 6;

        long long d  = s  - e;      
        long long ss  = (s2 - e2) / d;
        int dup  = (int)((d + ss) / 2);
        int miss = (int)((ss - d) / 2);
        return {dup, miss};
    }
};