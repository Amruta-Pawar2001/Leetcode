class Solution(object):
    def getConcatenation(self, nums):
        n = len(nums)
        l = 2*n
        j=0
        ans = []
        for i in range(l):
            if j == n:
                j=0
            ans.append(nums[j])
            j+=1
        return ans
            
            
            
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        