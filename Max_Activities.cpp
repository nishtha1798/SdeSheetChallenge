#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
      // Write your code here.

    vector<pair<int,int>> temp;

    for(int i=0;i<start.size();i++)

        temp.push_back({finish[i],start[i]});

    sort(temp.begin(),temp.end());

    int act=1;

    int j=0;

    for(int i=1;i<temp.size();i++)

    {

        if(temp[i].second>=temp[j].first)

        {

            act++;

            j=i;

        }

    }

    return act;
}