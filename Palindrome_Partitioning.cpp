bool palind(string s,int start,int end)
{
    while(start<=end)
    {
        if(s[start++]!=s[end--])
        {
            return false;
        }
    }
    return true;
}
void find(int index,string s,vector<vector<string>> &ans,vector<string> &curr)
{
    if(index==s.size())
    {
        ans.push_back(curr);
        return;
    }
    for(int i=index;i<s.size();i++)
    {
        if(palind(s,index,i))
        {
           // cout<<s.substr(index,i-index+1)<<endl;
            curr.push_back(s.substr(index,i-index+1));
            find(i+1,s,ans,curr);
            curr.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>> ans;
    vector<string> curr;
    find(0,s,ans,curr);
    return ans;
}