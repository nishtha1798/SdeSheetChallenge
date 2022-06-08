#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n=arr.size();
    map<int,int> mp;
    vector<int> Xor(arr.size());
    Xor[0]=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        Xor[i]=Xor[i-1] ^ arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        int cal=Xor[i]^x;
        
            count+=(int)mp[cal];
        if(Xor[i]==x)
        {
            count+=1;
        }
        mp[Xor[i]]++;
    }
        return count;
}