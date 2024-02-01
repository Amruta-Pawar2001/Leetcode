class Solution(object):
    def mostWordsFound(self, sentences):
        count=0
        highcount=0
        n=len(sentences)
        for i in range(n):
            words=sentences[i].split()
            count=len(words)
            highcount=max(count,highcount)
            
        return highcount
            
        """
        :type sentences: List[str]
        :rtype: int
        """
        