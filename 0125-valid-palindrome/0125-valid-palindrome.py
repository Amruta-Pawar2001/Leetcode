class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        newStr = ""
        
        for i in s:
            if i.isalnum():
                newStr += i.lower()
                
        return newStr == newStr[::-1]
        
        