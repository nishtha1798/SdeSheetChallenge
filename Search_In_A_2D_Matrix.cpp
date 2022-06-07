#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[i].size();j++)
        {
            if(mat[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}