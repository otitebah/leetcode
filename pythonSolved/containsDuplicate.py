class Solution(object):
    def containsDuplicate(self, nums):
        st = set(nums)
        if len(st) != len(nums):
            return True
        else:
            return False









nums = [1,3,4,2]
print (Solution().containsDuplicate(nums))