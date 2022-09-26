class Solution {
public:
//     void bfs(int row , int col ,vector<vector<int>> &visited,vector<vector<char>>& grid)
//     {
//         queue<pair<int,int>> q;
//         visited[row][col]=1;
//         q.push({row,col});
//         int n =grid.size();
//         int m =grid[0].size();
//         int newrow,newcol;
//         while(q.size()!=0)
//         {      
//             int row =q.front().first;
//             int col =q.front().second;
//             q.pop();
//             // for(int srow=-1;srow<=1;srow++)
//             // {
//             //     for(int scol=-1;scol<=1;scol++)
//             //     {
//             //         newrow = srow+row;
//             //         newcol = scol+col;
//             //         if(!visited[newrow][newcol]&&grid[newrow][newcol]=='1'&&newrow>=0&&newrow<n&&newcol>=0&&newcol<m)
//             //         {
//             //             visited[newrow][newcol]=1;
//             //             q.push({newrow,newcol});
//             //         }
//             //     }
//             // }
//             if(!visited[row-1][col]&&!visited[row+1][col]&&!visited[row][col-1]&&!visited[row][col+1]&&!visited[row][col-1]&&grid[row])
                
//         }
//     }
    
    void dfs(int row , int col ,vector<vector<int>> &visited,vector<vector<char>>& grid)
    {
        
        if(row<0||col<0||row>=grid.size()||col>=grid[0].size())
            return;
       
        if(visited[row][col]==0&&grid[row][col]=='1')
        {
             visited[row][col]=1;
            dfs(row-1,col,visited,grid);
            dfs(row+1,col,visited,grid);
            dfs(row,col-1,visited,grid);
            dfs(row,col+1,visited,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
//         int startpoint=0;
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>> visited(n , vector<int>(m,0));
//         for(int row =0; row<n; row++)
//         {
//             for(int col=0; col<m; col++)
//             {
//                 if(!visited[row][col]&&grid[row][col]=='1')
//                 {
//                     startpoint++;
//                     bfs(row,col,visited,grid);
//                 }
                    
//             }
//         }
//         return startpoint;
        
        int startpoint=0;
        int n =grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n , vector<int>(m,0));
        for(int row =0; row<n; row++)
        {
            for(int col=0; col<m; col++)
            {
                if(visited[row][col]==0&&grid[row][col]=='1')
                {
                    startpoint++;
                    dfs(row,col,visited,grid);
                }
            }
        }
        return startpoint;
    }
};