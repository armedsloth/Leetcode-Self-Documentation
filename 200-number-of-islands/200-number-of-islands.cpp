class Solution {
public:
    void dfs( vector<vector<char>> &grid, int row, int col)
    {
        if(grid[row][col]!='1')
            return;
        grid[row][col]='2';
        int offset[]={0,1,0,-1,0};
        for(int i=0; i<4; i++)
        {
            int r = row + offset[i], c= col + offset[i+1];
            if(r<grid.size()&& r>=0 && c>=0 && c<grid[0].size() && grid[r][c]=='1')
                dfs(grid, r, c);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) 
    {
        int count=0;
        for(int i=0; i<grid.size();i++)
            for(int j=0; j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(grid, i, j);
                }
            }
        return count;
    }
};