void DFS(int i, int j, vector<vector<char>>& grid, int n, int m){
        if(i<0 || i>=n || j<0 || j>=m){
            return;
        }
        if(grid[i][j]=='1'){
            grid[i][j]='0';
            DFS(i+1, j, grid, n, m);
            DFS(i, j+1, grid, n, m);
            DFS(i-1, j, grid, n, m);
            DFS(i, j-1, grid, n, m);
            DFS(i-1, j-1, grid, n, m);
            DFS(i+1, j-1, grid, n, m);
            DFS(i+1, j+1, grid, n, m);
            DFS(i-1, j+1, grid, n, m);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ctr=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    DFS(i, j, grid, n, m);
                    ctr++;
                }
            }
        }
        return ctr;
    }
