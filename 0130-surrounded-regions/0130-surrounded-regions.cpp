class Solution {
public:
    void dfs(vector<vector<char>> &grid , vector<vector<bool>> & vis,int r , int c)
    {
        int n = grid.size() ;
        int m = grid[0].size() ;

        vis[r][c] = true ;

        vector<pair<int,int>> dir = {{-1,0},{1,0} ,{0,1},{0,-1}};

        for(auto itr : dir)
        {
            int row = itr.first;
            int col = itr.second ;

            int nrow = row + r ;
            int ncol = col + c ; 

            if(nrow < n && ncol < m && nrow >= 0 && ncol  >= 0 && !vis[nrow][ncol] && grid[nrow][ncol] == 'O')
            {
                dfs(grid,vis,nrow,ncol);
            }




        }
    }
    void solve(vector<vector<char>>& grid) {
        int n = grid.size() ;
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        //-----
        for(int i=0 ; i<m ; i++)
        {
            if(grid[0][i] == 'O' && vis[0][i] == false)
            {
                dfs(grid,vis,0,i); 
            }
        }
    // ||||
        for(int i=0  ; i<m ; i++)
        {
            if(grid[n-1][i] == 'O' && vis[n-1][i] == false)
            {
                dfs(grid,vis,n-1,i);
            }
        }
    // ------
        for(int i=0 ; i<n ; i++)
        {
            if(grid[i][0] == 'O' && vis[i][0] == false)
            {
                dfs(grid,vis,i,0); 
            }
        }

        // || 
        for(int i=0 ; i<n ; i++ )
        {
            if(grid[i][m-1] == 'O' && vis[i][m-1] == false)
            {
                dfs(grid,vis,i,m-1);
            }
        }

        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ;j++)
            {
                if(vis[i][j] == false &&grid[i][j] == 'O')
                {
                    grid[i][j] = 'X';
                }

            }
        }

      



        

    }
};