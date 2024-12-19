class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        newrow = set()
        newcol = set()
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0 :
                    newrow.add(i)
                    newcol.add(j)
                    
        for a in newrow:
            for b in range(len(matrix[0])):
                    matrix[a][b] = 0
                
        for b in newcol:
            for a in range(len(matrix)):
                    matrix[a][b] = 0