#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    unordered_map<char,int> mp;
    int start=0;
    int maximumLength=INT_MIN;
    for(int i=0;i<input.length();i++)
    {
        if(mp.find(input[i])!=mp.end() && mp[input[i]]>=start)
        {
            start=mp[input[i]]+1;
        }
        maximumLength=max(maximumLength,i-start+1);
        mp[input[i]]=i;
    }
    return maximumLength;
}