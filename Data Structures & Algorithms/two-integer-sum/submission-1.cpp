class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int f = target - nums[i];
            if (mp.contains(f))
                return {mp[f], i};
            else
                mp[nums[i]] = i;
        }
    }
};
