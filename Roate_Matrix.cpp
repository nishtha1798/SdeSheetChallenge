#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int row=0;
    int col=0;
    int curr,prev;
   while(row<n && col<m)
   {
       if (row==n-1 || col==m-1)
        { 
            break; 
        }
        prev=mat[row+1][col]; 
        for (int i = col; i < m; i++) 
        { 
            curr = mat[row][i]; 
            mat[row][i] = prev; 
            prev = curr; 
        } 
        row++; 
        for (int i = row; i < n; i++) 
        { 
            curr = mat[i][m-1]; 
            mat[i][m-1] = prev; 
            prev = curr; 
        } 
        m--; 
        if(row < n) 
        { 
            for (int i = m-1; i >= col; i--) 
            { 
                curr = mat[n-1][i]; 
                mat[n-1][i] = prev; 
                prev = curr; 
            } 
        } 
        n--; 
        if (col < m) 
        { 
            for(int i = n-1; i >= row; i--) 
            { 
                curr = mat[i][col]; 
                mat[i][col] = prev; 
                prev = curr; 
            } 
        } 
        col++; 
   }
    
}