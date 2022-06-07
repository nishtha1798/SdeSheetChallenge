#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    long ans=1;
    long gg=x;
    while(n>0)
    {
        if(n%2==0)
        {
            gg=(gg%m*gg%m)%m;
            n=n>>1;
        }
        else
        {
            ans=(ans*gg%m)%m;
            n=n-1;
        }
    }
    return (int)(ans%m);
}