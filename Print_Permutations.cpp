void find(int low,string &s,vector<string> &ans,int high)
{
    if(low==high)
    {
        ans.push_back(s);
    }
    else
    {
        for(int i=low;i<=high;i++)
        {
            swap(s[low],s[i])           ;
            find(low+1,s,ans,high);
            swap(s[low],s[i]);
        }
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    find(0,s,ans,s.size()-1);
    return ans;
}