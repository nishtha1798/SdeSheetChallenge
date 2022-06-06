#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
    int count1=0;
        int count2=0;
            int a=0;
            int b=0;
           for(int i=0;i<nums.size();i++)
           {
                   if(nums[i]==a)
                   {
                          count1++;
                   }
                   else if(nums[i]==b)
                   {
                           count2++;
                   }
                   else if(count1==0)
                   {
                           a=nums[i];
                           count1=1;
                   }
                   else if(count2==0)
                   {
                           b=nums[i];
                           count2=1;
                   }
                   else
                   {
                           count1--;
                           count2--;
                   }
           }
            count1=0;
            count2=0;
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i]==a)
                    {
                            count1++;
                    }
                    if(nums[i]==b)
                    {
                            count2++;
                    }
             }
            int n=nums.size();
           vector<int> ans;
         if(count1>n/3)   
         {
                 ans.push_back(a);
         }
            if(count2>n/3)
            {
                    ans.push_back(b);
            }
            return ans;
}