class Solution(object):
    def topKFrequent(self, nums, k):
        numsCount = {}
        i = 0
        while i < len(nums):
            if nums[i] in numsCount:
                numsCount[nums[i]] += 1
            else:
                numsCount[nums[i]] = 1
            i += 1
        sorte_dic = dict(sorted(numsCount.items(), key=lambda item : item[1], reverse=True))
        result = []
        for key, value in sorte_dic.items():
            if k == len(result):
                break
            result.append(key)
        return (result)






nums = [4,1,-1,2,-1,2,3]
k = 2
print(Solution().topKFrequent(nums, k))
# print ()