#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
//     for(auto it:intervals)
//     {
//         cout<<it[0]<<" "<<it[1]<<endl;
//     }
   
    auto it=intervals[0];
    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i][0]<=it[1])
        {
            it[1]=max(it[1],intervals[i][1]);
        }
        else
        {
            ans.push_back(it);
            it=intervals[i];
        }
    }
    
    ans.push_back(it);
    return ans;
    
    
   // return intervals;
}
