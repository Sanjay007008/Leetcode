class Solution {
public:
    bool dfs(int node , int col , vector<int>& color , vector<vector<int>>& grid)
    {
        color[node] = col ;

        for(auto itr : grid[node])
        {
            if(color[itr] == -1)
            {
                if(dfs(itr,!col,color,grid) == false) return false ; 
            }
            else if(color[itr] == col){
                return 0 ; 
            }
        }

        return true ;
    }
    bool isBipartite(vector<vector<int>>& grid) {
        vector<int> color(grid.size(),-1);

        for(int i=0 ; i<grid.size() ; i++)
        {
            if(color[i] == -1)
            {
                if(dfs(i,0,color,grid) == false)
            {
                return false; 
            }
            }
            
        }



        return true; 
    }
};