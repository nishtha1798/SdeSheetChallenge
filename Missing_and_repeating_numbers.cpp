#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int x,y;
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])-1]>0)
        {
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        else
        {
            x=abs(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            y=i+1;
            break;
        }
    }
    return {y,x};
}
