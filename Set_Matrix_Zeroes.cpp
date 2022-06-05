#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	 int R = matrix.size();
        int C = matrix[0].size();
        set<int> rows ;
        set<int> cols ;
        for (int i = 0; i < R; i++) 
        {
          for (int j = 0; j < C; j++) 
          {
            if (matrix[i][j] == 0) 
            {
                rows.insert(i);
                cols.insert(j);
            }
          }
        }
        for (int i = 0; i < R; i++) 
        {
          for (int j = 0; j < C; j++) 
          {
            if (rows.count(i) || cols.count(j)) 
            {
              matrix[i][j] = 0;
            }
          }
        }
}