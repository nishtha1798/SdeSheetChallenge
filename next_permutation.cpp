#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
 int i;
       for(i=nums.size()-2;i>=0;i--)
       {
               if(nums[i]<nums[i+1])
               {
                       break;
               }
       }
       if(i<0)     
       {
               reverse(nums.begin(),nums.end());
       }
            else
            {
                    int j;
                    for(j=nums.size()-1;j>i;j--)
                    {
                            if(nums[j]>nums[i])
                            {
                                    break;
                            }
                    }
                    swap(nums[j],nums[i]);
                    //cout<<i<<" "<<j<<endl;
                   
                    reverse(nums.begin()+i+1,nums.end());
            }
    return nums;
}