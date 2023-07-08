Time Compelxity:- O(row*col)
  Space Complexity:- O(1)




void setZeroes(vector<vector<int>>& matrix) {
         int row=matrix.size();
        int col=matrix[0].size();


// for making rows equal to zero
   
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<col;k++){
                        if(matrix[i][k]!=0){
                            matrix[i][k]=1e9;
                        }
                    }
                }
            }
        }

// for making columns zero
   
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<row;k++){
                        if(matrix[k][j]!=0){
                            matrix[k][j]=1e9;
                        }
                    }
                }
            }
        }


        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==1e9){
                    matrix[i][j]=0;
                }
            }
        }
    }
