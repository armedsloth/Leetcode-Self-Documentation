class Solution {
public:
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {    
        vector <int> diag;                              //vector to store individual diagonals
        int m= mat.size()-1, n= mat[0].size()-1;        // dimensions
        
        for(int j=0; j<=n;j++)                          // for top right diagonals
        {
            for(int i=0; i<=min(m,n-j);i++)             // storing each diagonal
                diag.push_back(mat[i][j+i]);            // each diagonal element looks like mat[i][j+i]
                
            sort(diag.begin(),diag.end());

            for(int i=0; i<=min(m,n-j);i++)             // replacing sorted pattern in top right diagonals
                mat[i][j+i] = diag[i];
            
            diag.clear();                               // emptying list before next diagonals 
        }
        
        for(int j=0;j<=m;j++)                           // bottom left diagonals
        {
            for(int i=0; i<=min(n,m-j);i++)             // storing each diagonal
                diag.push_back(mat[j+i][i]);            // diagonal element looks like mat[j+i][i]

            sort(diag.begin(),diag.end());              // creating a sorted list for diagonal elements
            
            for(int i=0; i<=min(n,m-j);i++)             // replacing sorted pattern in bottom left diagonal
                mat[j+i][i] = diag[i];
            
            diag.clear();                               // emptying list before next diagonal
        }    
        return mat;
    }
};