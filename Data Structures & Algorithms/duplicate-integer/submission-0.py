class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        f = 0
        for i in range(1, len(nums)):
            if nums[i] == nums[i-1]:
                f = 1
                break

        if f:
            return  True;
        else:
            return False;

