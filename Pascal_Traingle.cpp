#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> gg;
            for(long long int i=0;i<n;i++)
        {
                vector<long long int> ans;
                long long int val=1;
                for(int j=0;j<=i;j++)
                {
                        ans.push_back(val);
                        val=(val*(i-j))/(j+1);
                }
                    gg.push_back(ans);
                    ans.clear();
        }
        return gg;  
}
