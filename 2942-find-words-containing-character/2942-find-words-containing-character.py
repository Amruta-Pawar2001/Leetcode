class Solution(object):
    def findWordsContaining(self, words, x):
        n = len(words)
        ans=[]
        for i in range(n):
            for j in range(len(words[i])):
                if words[i][j]==x:
                    ans.append(i)
                    break
                
        return ans
                    
        """
        :type words: List[str]
        :type x: str
        :rtype: List[int]
        """
        