class Solution:
    def minDifference(self, nums: List[int]) -> int:
        if len(nums) <= 4 : return 0
        s = heapq.nsmallest(4,nums)
        l = heapq.nlargest(4,nums)

        return min(l[0] - s[3], l[1]- s[2], l[2]-s[1],l[3]-s[0])