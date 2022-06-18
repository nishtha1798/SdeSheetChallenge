#include<bits/stdc++.h>
void find(vector<int> &arr,int index,vector<int> &inp,vector<vector<int>>&ans)
{
   ans.push_back(inp);
    for(int i=index;i<arr.size();i++)
    {
        if(i!=index  && arr[i-1]==arr[i]) continue;
        inp.push_back(arr[i]);
        find(arr,i+1,inp,ans);
        inp.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> inp;
    find(arr,0,inp,ans);
    return ans;
}