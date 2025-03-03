class Solution {
public:
    int fun(int i,int j , int n , int m , vector<vector<int>> & dp)
    {
        if(i == n-1 && j == m-1)
        {
            return 1  ; 
        }
         if(i >= n || j >= m)
        {
            return 0 ; 
        }

        if(dp[i][j] != -1) return dp[i][j] ; 
        else
        {
            return dp[i][j] = fun(i+1 , j , n , m , dp) + fun(i , j+1 , n ,  m , dp) ; 
        }
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n , vector<int>(m,-1)) ;

        return fun(0,0,n,m,dp) ; 
    }
};