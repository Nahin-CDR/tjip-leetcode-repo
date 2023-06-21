/*
Explanation of this problem added to other txt file
*/


class Solution {
public:
int firstMissingPositive(vector<int>& nums) {
     int len = nums.size();
     for(int i=0; i<len;)
     {
          if(nums[i]>0 && nums[i]<len && nums[nums[i]-1] != nums[i])
          {
               swap(nums[nums[i]-1],nums[i]);
          }
          else
          {
               i++;
          }
     }
     for(int i=0; i<len; i++)
     {
          if(nums[i] != i+1) return (i+1);
     }
     return (len+1);
     }
};
