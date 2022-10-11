class Solution {
public:
    int fun(string word1, string word2)
    {
        // if(i<0)
        //     return j+1;
        // if(j<0)
        //     return i+1;
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i =0;i<=n;i++)
        {
            dp[i][0] = i;
        }
        for(int j=0;j<=m;j++)
        {
            dp[0][j] = j;
        }
        // if(dp[i][j]!=-1)
        //     return dp[i][j];
        // if(word1[i]==word2[j])
            
            // return fun(word1, word2, i-1,j-1,dp);
        // return dp[i][j] = 1 + min(fun(word1 , word2 , i-1 , j,dp), min(fun(word1 , word2 , i-1,j-1,dp),fun(word1, word2, i , j-1,dp)));
        for(int i =1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 1 + min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
            }
        }
        return dp[n][m];
    }
    int minDistance(string word1, string word2) {
        return fun(word1 , word2 );
    }
};