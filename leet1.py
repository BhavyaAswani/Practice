class Solution:
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            for k in range(len(nums)):
                if i<k:
                    if nums[i]+nums[k] == target:
                        return [i,k]
a1=Solution()
print(a1.twoSum([2, 7, 11, 15], 9))