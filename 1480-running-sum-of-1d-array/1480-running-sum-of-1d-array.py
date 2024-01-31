class Solution(object):
    def runningSum(self, nums):
        sum=0
        n = len(nums)
        for i in range(n):
            sum+=nums[i]
            nums[i]=sum
        return nums  
            
        """
        :type nums: List[int]
        :rtype: List[int]
        """