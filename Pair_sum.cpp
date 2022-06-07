#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    int  n=arr.size();
     map<int, int> hash;
     vector<vector<int>> ans;
    for (int ele : arr)
    {
        int count = hash[s - ele];
        while (count--)
        {
            ans.push_back({ele,s-ele});
        }
       hash[ele] += 1;
    }
     vector<vector<int>> res(ans.size(),vector<int>(2,0));
    for(int i=0;i<ans.size();i++)
    {
       int a = ans[i][0], b = ans[i][1];
        res[i][0] = min(a, b);
        res[i][1] = max(a, b);
    }
    sort(res.begin(),res.end());
    
return res;
    
    
    
}