#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.
    int curr_count=1;
    int final_count=1;
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++)
    {
        if(nums[i]!=nums[i-1])
        {
            if(nums[i]==nums[i-1]+1)
            {
                curr_count+=1;
            }
            else
            {
                final_count=max(final_count,curr_count);
                curr_count=1;
             }
        }
    }
    return max(final_count,curr_count);    
    
}