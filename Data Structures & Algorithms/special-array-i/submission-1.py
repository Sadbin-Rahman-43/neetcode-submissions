class Solution:
    def isArraySpecial(self, nums: List[int]) -> bool:

        from itertools import pairwise

        return all(sada % 2 != kala % 2 for sada, kala in pairwise(nums))


# class Solution:
#     def isArraySpecial(self, nums: List[int]) -> bool:
#         for i in range(len(nums) - 1):
#             if (nums[i] % 2 == 0 and nums[i+1] % 2 != 0) or (nums[i] % 2 != 0 and nums[i+1] % 2 == 0):
#                 continue
#             else:
#                 return False

#         return True
