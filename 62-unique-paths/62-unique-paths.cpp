class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ways;
        vector<int> row(n,1);
        ways.push_back(row);
        for(int i=1;i<m;i++)
        {
            vector<int> v(n,0);
            v[0]=1;
            ways.push_back(v);
        }
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
                ways[i][j]=ways[i-1][j]+ways[i][j-1];
        }
        return ways[m-1][n-1];
    }
};