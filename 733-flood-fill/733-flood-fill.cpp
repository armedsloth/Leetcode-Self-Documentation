class Solution {
public:
    void dfs(vector<vector<int>>&image, int sr, int sc, int val, int color)
    {
        if(val==color || image[sr][sc]!=val)
            return;
        image[sr][sc]=color;
        if(sr>0)//for up
            dfs(image,sr-1,sc,val, color);
        if(sc>0)//for left
            dfs(image,sr,sc-1,val, color);
        if(sr<image.size()-1)//for down
            dfs(image,sr+1,sc,val, color);
        if(sc<image[0].size()-1)
            dfs(image,sr,sc+1,val, color);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color ) 
    {
        dfs(image,sr,sc,image[sr][sc], color);
        return image;
    }
};